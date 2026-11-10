/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00427b20; name: FUN_00427b20
 */


undefined8 FUN_00427b20(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar5;
  
  iVar1 = FUN_004001b0(&DAT_0439e7b0,&LAB_00427a20);
  puVar5 = (undefined *)0x0;
  if ((iVar1 != 0) && (DAT_0439e7b4 != 0)) {
    FUN_00400140(DAT_0439e7c8);
    if (DAT_0439e7c0 == (undefined *)0x0) {
      DAT_0439e7c0 = PTR_PTR_043741e8;
    }
    puVar5 = DAT_0439e7c0;
    FUN_00400160(DAT_0439e7c8);
  }
  puVar2 = (undefined *)FUN_004196b0();
  if (puVar5 == puVar2) {
    lVar4 = FUN_004192e0();
    uVar3 = 0;
    if (lVar4 != 0) {
      uVar3 = FUN_00418cc0(lVar4,param_1,(long)param_2);
      return uVar3;
    }
  }
  else {
    FUN_004001b0(&DAT_0439e7b0,&LAB_00427a20);
    FUN_00400140(DAT_0439e7c8);
    puVar2 = DAT_0439e7c0;
    puVar5 = PTR_PTR_043741e8;
    if (DAT_0439e7c0 == (undefined *)0x0) {
      DAT_0439e7c0 = PTR_PTR_043741e8;
      FUN_00400160(DAT_0439e7c8);
      UNRECOVERED_JUMPTABLE = *(code **)(puVar5 + 8);
    }
    else {
      FUN_00400160(DAT_0439e7c8);
      UNRECOVERED_JUMPTABLE = *(code **)(puVar2 + 8);
    }
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00427be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return uVar3;
    }
    FUN_004014b0(0x24,100,0x65,"external/openssl/crypto/rand/rand_lib.c",0x345);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


