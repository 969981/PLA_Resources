/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00405620; name: FUN_00405620
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_00405620(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)FUN_004002a0(0xb0,"external/openssl/crypto/lhash/lhash.c",0x33);
  if (plVar4 != (long *)0x0) {
    lVar5 = FUN_004002a0(0x80,"external/openssl/crypto/lhash/lhash.c",0x3b);
    *plVar4 = lVar5;
    lVar3 = DAT_0388a828;
    if (lVar5 == 0) {
      FUN_00400420(0,"external/openssl/crypto/lhash/lhash.c",0x47);
      FUN_00400420(plVar4,"external/openssl/crypto/lhash/lhash.c",0x48);
      return (long *)0x0;
    }
    *(undefined4 *)((long)plVar4 + 0x24) = 8;
    puVar2 = PTR_FUN_043741a8;
    puVar1 = PTR_strcmp_043741a0;
    plVar4[3] = lVar3;
    lVar5 = _UNK_03889f88;
    lVar3 = _DAT_03889f80;
    if (param_2 != (undefined *)0x0) {
      puVar1 = param_2;
    }
    if (param_1 != (undefined *)0x0) {
      puVar2 = param_1;
    }
    plVar4[1] = (long)puVar1;
    plVar4[2] = (long)puVar2;
    plVar4[6] = lVar5;
    plVar4[5] = lVar3;
  }
  return plVar4;
}


