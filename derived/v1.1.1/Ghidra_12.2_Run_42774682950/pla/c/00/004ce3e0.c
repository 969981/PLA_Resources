/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004ce3e0; name: FUN_004ce3e0
 */


undefined8 FUN_004ce3e0(long param_1,long param_2,int param_3,int param_4)

{
  ulong uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar4 = *(uint *)(*(long *)(param_1 + 0x508) + 0x26c);
    if ((uVar4 == 0) &&
       ((*(long *)(param_1 + 0x510) == 0 ||
        (uVar4 = *(uint *)(*(long *)(param_1 + 0x510) + 0x26c), uVar4 == 0)))) {
                    /* WARNING: Subroutine does not return */
      FUN_00404dd0("Assertion failed: s->psksession != NULL && s->psksession->ext.max_early_data > 0"
                   ,"external/openssl/ssl/record/ssl3_record.c",0x74);
    }
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x17dc);
    if ((*(int *)(param_1 + 0x6f0) == 2) &&
       (uVar2 = *(uint *)(*(long *)(param_1 + 0x508) + 0x26c), uVar2 <= uVar4)) {
      uVar4 = uVar2;
    }
    if (uVar4 == 0) {
      uVar3 = 10;
      if (param_4 != 0) {
        uVar3 = 0x50;
      }
      FUN_004c99a0(param_1,uVar3,0x214,0xa4,"external/openssl/ssl/record/ssl3_record.c",0x86);
      return 0;
    }
  }
  uVar1 = (ulong)*(uint *)(param_1 + 0x17e0) + param_2;
  if (uVar1 <= uVar4 + param_3) {
    *(int *)(param_1 + 0x17e0) = (int)uVar1;
    return 1;
  }
  uVar3 = 10;
  if (param_4 != 0) {
    uVar3 = 0x50;
  }
  FUN_004c99a0(param_1,uVar3,0x214,0xa4,"external/openssl/ssl/record/ssl3_record.c",0x8f);
  return 0;
}


