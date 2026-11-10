/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00427470; name: FUN_00427470
 */


long * FUN_00427470(int param_1,long param_2,ulong param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_004002a0(0x38,"external/openssl/crypto/rand/rand_lib.c",0x1b1);
  if (plVar1 == (long *)0x0) {
    FUN_004014b0(0x24,0x74,0x41,"external/openssl/crypto/rand/rand_lib.c",0x1b4);
  }
  else {
    if (0x2fff < param_3) {
      param_3 = 0x3000;
    }
    plVar1[3] = param_2;
    plVar1[4] = param_3;
    lVar2 = thunk_FUN_004002a0(param_3,"external/openssl/crypto/rand/rand_lib.c",0x1bc);
    *plVar1 = lVar2;
    if (lVar2 == 0) {
      FUN_004014b0(0x24,0x74,0x41,"external/openssl/crypto/rand/rand_lib.c",0x1be);
      FUN_00400420(plVar1,"external/openssl/crypto/rand/rand_lib.c",0x1c7);
      plVar1 = (long *)0x0;
    }
    else {
      plVar1[6] = (long)param_1;
    }
  }
  return plVar1;
}


