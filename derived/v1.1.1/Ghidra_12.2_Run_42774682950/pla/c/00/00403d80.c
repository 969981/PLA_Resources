/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00403d80; name: FUN_00403d80
 */


long * FUN_00403d80(long param_1)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)FUN_004002a0(0x78,"external/openssl/crypto/bio/bio_lib.c",0x49);
  if (plVar3 == (long *)0x0) {
    FUN_004014b0(0x20,0x6c,0x41,"external/openssl/crypto/bio/bio_lib.c",0x4c);
    return (long *)0x0;
  }
  plVar1 = plVar3 + 0xd;
  *plVar3 = param_1;
  *(undefined4 *)((long)plVar3 + 0x24) = 1;
  *(undefined4 *)(plVar3 + 10) = 1;
  iVar2 = FUN_00400880(0xc,plVar3,plVar1);
  if (iVar2 != 0) {
    lVar4 = FUN_004000a0();
    plVar3[0xe] = lVar4;
    if (lVar4 != 0) {
      if (*(code **)(param_1 + 0x48) != (code *)0x0) {
        iVar2 = (**(code **)(param_1 + 0x48))(plVar3);
        if (iVar2 == 0) {
          FUN_004014b0(0x20,0x6c,0x46,"external/openssl/crypto/bio/bio_lib.c",0x5f);
          FUN_00400e80(0xc,plVar3,plVar1);
          FUN_00400180(plVar3[0xe]);
          goto LAB_00403eb4;
        }
        if (*(long *)(param_1 + 0x48) != 0) {
          return plVar3;
        }
      }
      *(undefined4 *)(plVar3 + 4) = 1;
      return plVar3;
    }
    FUN_004014b0(0x20,0x6c,0x41,"external/openssl/crypto/bio/bio_lib.c",0x59);
    FUN_00400e80(0xc,plVar3,plVar1);
  }
LAB_00403eb4:
  FUN_00400420(plVar3,"external/openssl/crypto/bio/bio_lib.c",0x6a);
  return (long *)0x0;
}


