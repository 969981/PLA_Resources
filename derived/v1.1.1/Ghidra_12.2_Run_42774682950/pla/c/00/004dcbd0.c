/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004dcbd0; name: FUN_004dcbd0
 */


undefined ** FUN_004dcbd0(ushort param_1)

{
  if (param_1 < 0x602) {
    if (param_1 < 0x401) {
      if (param_1 < 0x301) {
        if (param_1 == 0x201) {
          return &PTR_s_rsa_pkcs1_sha1_041828e8;
        }
        if (param_1 == 0x202) {
          return (undefined **)&DAT_041829b0;
        }
        if (param_1 == 0x203) {
          return (undefined **)&DAT_04182730;
        }
      }
      else {
        if (param_1 == 0x301) {
          return &PTR_s_rsa_pkcs1_sha224_041828c0;
        }
        if (param_1 == 0x302) {
          return (undefined **)&DAT_04182988;
        }
        if (param_1 == 0x303) {
          return (undefined **)&DAT_04182708;
        }
      }
    }
    else if (param_1 < 0x501) {
      if (param_1 == 0x401) {
        return &PTR_s_rsa_pkcs1_sha256_04182848;
      }
      if (param_1 == 0x402) {
        return (undefined **)&DAT_04182910;
      }
      if (param_1 == 0x403) {
        return &PTR_s_ecdsa_secp256r1_sha256_04182640;
      }
    }
    else if (param_1 < 0x503) {
      if (param_1 == 0x501) {
        return &PTR_s_rsa_pkcs1_sha384_04182870;
      }
      if (param_1 == 0x502) {
        return (undefined **)&DAT_04182938;
      }
    }
    else {
      if (param_1 == 0x503) {
        return &PTR_s_ecdsa_secp384r1_sha384_04182668;
      }
      if (param_1 == 0x601) {
        return &PTR_s_rsa_pkcs1_sha512_04182898;
      }
    }
  }
  else if (param_1 < 0xeded) {
    switch(param_1) {
    case 0x804:
      return &PTR_s_rsa_pss_rsae_sha256_04182758;
    case 0x805:
      return &PTR_s_rsa_pss_rsae_sha384_04182780;
    case 0x806:
      return &PTR_s_rsa_pss_rsae_sha512_041827a8;
    case 0x807:
      return &PTR_s_ed25519_041826b8;
    case 0x808:
      return &PTR_s_ed448_041826e0;
    case 0x809:
      return &PTR_s_rsa_pss_pss_sha256_041827d0;
    case 0x80a:
      return &PTR_s_rsa_pss_pss_sha384_041827f8;
    case 0x80b:
      return &PTR_s_rsa_pss_pss_sha512_04182820;
    }
    if (param_1 == 0x602) {
      return (undefined **)&DAT_04182960;
    }
    if (param_1 == 0x603) {
      return &PTR_s_ecdsa_secp521r1_sha512_04182690;
    }
  }
  else {
    if (param_1 == 0xeded) {
      return (undefined **)&DAT_04182a28;
    }
    if (param_1 == 0xeeee) {
      return (undefined **)&DAT_041829d8;
    }
    if (param_1 == 0xefef) {
      return (undefined **)&DAT_04182a00;
    }
  }
  return (undefined **)0x0;
}


