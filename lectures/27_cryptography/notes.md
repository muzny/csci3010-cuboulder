Symmetric key algorithms
===============
Parties must have a secure channel to agree on a shared secret key.
 
```
cipher text = encode(message, secret key, [nonce])
message = decode(cipher text, secret key, [nonce])
```

DUOTUKD -> SECRETS

One Time Pad
-----
information theoretically secure
normally a one-to-one mapping from letters to other letters
secure, but inefficient

- mappings need to be randomly generated
- mappings _must_ only be used once!
- secret key needs to be at least n bits long, if we're sending n bits
- XOR operation is a standard encoding (patented in 1919)

Used since the 1920s in military, diplomatic, etc missions.

What happens if we use a OTP twice?
------------------
1. An eavesdropper has the information:  
The two cipher texts: `c1` and `c2`  

2. What information about the messages does this lead to?  
```
c1 = k XOR m1
c2 = k XOR m2

c1 XOR c2 = (k XOR m1) XOR (k XOR m2)
c1 XOR c2 = m1 XOR m2
```
Asymmetric encription
-----------------
- public/private key exchange
- goal is to generate a shared secret over an insecure channel
- that shared secret could then be used to encode/decode messages
- [Diffe-Hellman Key Exchange](https://en.wikipedia.org/wiki/Diffie%E2%80%93Hellman_key_exchange)

















