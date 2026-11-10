/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c6314c; name: FUN_02c6314c
 */


void FUN_02c6314c(long param_1,uint param_2,undefined8 param_3)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar2 = FUN_02c6849c(*(undefined8 *)(param_1 + 0x98));
  if (iVar2 == 0x379) {
    iVar2 = FUN_02c6849c(*(undefined8 *)(param_1 + 0x98));
    if (iVar2 != 0x379) goto LAB_02c63238;
    if ((param_2 & 0xffff) == 0) {
      uVar3 = 0x30e;
LAB_02c63228:
      uVar4 = 0x1ba;
    }
    else {
      if ((param_2 & 0xffff) != 1) goto LAB_02c63238;
      sVar1 = FUN_02c687d4(*(undefined8 *)(param_1 + 0x98));
      if (sVar1 != 0x450) goto LAB_02c63238;
      uVar3 = 0x1ba;
      uVar4 = 0x30e;
    }
  }
  else {
    if (iVar2 != 0x378) {
      if (iVar2 == 0x286) {
        FUN_02c63254(param_1,param_2,param_3);
      }
      goto LAB_02c63238;
    }
    iVar2 = FUN_02c6849c(*(undefined8 *)(param_1 + 0x98));
    if (iVar2 != 0x378) goto LAB_02c63238;
    if ((param_2 & 0xffff) == 0) {
      uVar3 = 0x30d;
      goto LAB_02c63228;
    }
    if ((param_2 & 0xffff) != 1) goto LAB_02c63238;
    sVar1 = FUN_02c687d4(*(undefined8 *)(param_1 + 0x98));
    if (sVar1 != 0x44f) goto LAB_02c63238;
    uVar3 = 0x1ba;
    uVar4 = 0x30d;
  }
  FUN_02c6360c(param_1,uVar3,uVar4,param_3);
LAB_02c63238:
  FUN_02c610ec(param_1);
  FUN_02c61688(param_1);
  return;
}


