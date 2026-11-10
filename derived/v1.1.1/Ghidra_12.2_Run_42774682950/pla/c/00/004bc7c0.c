/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004bc7c0; name: FUN_004bc7c0
 */


void FUN_004bc7c0(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  if (DAT_0439e9d8 != 0) {
    if (DAT_0439e9e0 != 0) {
      uVar3 = 0;
      do {
        puVar5 = (undefined8 *)(DAT_0439e9d8 + uVar3 * 0x18);
        FUN_00400420(*puVar5,"external/openssl/crypto/conf/conf_ssl.c",0x31);
        plVar6 = puVar5 + 1;
        lVar1 = *plVar6;
        if (puVar5[2] != 0) {
          lVar4 = 0;
          uVar2 = 0;
          do {
            FUN_00400420(*(undefined8 *)(lVar1 + lVar4),"external/openssl/crypto/conf/conf_ssl.c",
                         0x33);
            FUN_00400420(*(undefined8 *)(*plVar6 + lVar4 + 8),
                         "external/openssl/crypto/conf/conf_ssl.c",0x34);
            uVar2 = uVar2 + 1;
            lVar4 = lVar4 + 0x10;
            lVar1 = *plVar6;
          } while (uVar2 < (ulong)puVar5[2]);
        }
        FUN_00400420(lVar1,"external/openssl/crypto/conf/conf_ssl.c",0x36);
        uVar3 = uVar3 + 1;
      } while (uVar3 < DAT_0439e9e0);
    }
    FUN_00400420(DAT_0439e9d8,"external/openssl/crypto/conf/conf_ssl.c",0x38);
    DAT_0439e9d8 = 0;
    DAT_0439e9e0 = 0;
  }
  return;
}


