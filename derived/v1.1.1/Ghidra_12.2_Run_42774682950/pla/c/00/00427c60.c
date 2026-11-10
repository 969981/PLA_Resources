/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00427c60; name: FUN_00427c60
 */


undefined8 FUN_00427c60(undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  FUN_004001b0(&DAT_0439e7b0,&LAB_00427a20);
  FUN_00400140(DAT_0439e7c8);
  if (DAT_0439e7c0 == (undefined *)0x0) {
    DAT_0439e7c0 = PTR_PTR_043741e8;
  }
  puVar1 = DAT_0439e7c0;
  FUN_00400160(DAT_0439e7c8);
  if (*(code **)(puVar1 + 8) == (code *)0x0) {
    FUN_004014b0(0x24,100,0x65,"external/openssl/crypto/rand/rand_lib.c",0x345);
    return 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x00427ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(puVar1 + 8))(param_1,param_2);
  return uVar2;
}


