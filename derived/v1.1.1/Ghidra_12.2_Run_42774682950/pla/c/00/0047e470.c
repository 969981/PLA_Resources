/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0047e470; name: FUN_0047e470
 */


bool FUN_0047e470(undefined8 param_1,uint *param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  
  uVar3 = *param_2;
  lVar6 = *(long *)(param_2 + 2);
  uVar5 = 0;
  if (0 < (long)(int)uVar3) {
    do {
      if (((int)uVar5 + (int)((uVar5 & 0xffffffff) / 0x12) * -0x12 == 0) &&
         ((iVar4 = FUN_004042b0(param_1,&DAT_0396725e,1), iVar4 < 1 ||
          (iVar4 = FUN_004048a0(param_1,param_3,param_3), iVar4 < 1)))) {
        return false;
      }
      puVar1 = (undefined1 *)(lVar6 + uVar5);
      puVar2 = &DAT_03996322;
      if ((ulong)uVar3 - 1 != uVar5) {
        puVar2 = &DAT_039b07fe;
      }
      uVar5 = uVar5 + 1;
      iVar4 = FUN_00402590(param_1,"%02x%s",*puVar1,puVar2);
      if (iVar4 < 1) {
        return false;
      }
    } while ((long)uVar5 < (long)(int)uVar3);
  }
  iVar4 = FUN_004042b0(param_1,&DAT_0396725e,1);
  return iVar4 == 1;
}


