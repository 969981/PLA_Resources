/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015916d0; name: FUN_015916d0
 */


/* WARNING: Removing unreachable block (ram,0x0159182c) */

void FUN_015916d0(long param_1,byte param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  undefined4 uVar5;
  long *plVar6;
  
  if (*(char *)(param_1 + 0x200) != '\0') {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x358);
  bVar3 = (param_2 & 1) == 0;
  uVar2 = uVar1 | param_3;
  if (bVar3) {
    uVar2 = uVar1 & (param_3 ^ 0xffffffff);
  }
  uVar5 = 1;
  if (bVar3) {
    uVar5 = 2;
  }
  bVar3 = uVar2 == 0;
  if (param_3 != 0x80) {
    uVar5 = 0;
  }
  *(uint *)(param_1 + 0x358) = uVar2;
  if ((uVar1 != 0) == !bVar3) {
    if (((param_3 != 0x80 & (param_2 ^ 1)) == 0) && (uVar1 != uVar2)) {
      FUN_0183911c(param_1,bVar3,uVar5);
      uVar2 = *(uint *)(param_1 + 0x358);
      uVar1 = *(uint *)(param_1 + 0x354);
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x354);
    }
    if (uVar1 == 0) {
      return;
    }
    if (uVar1 == uVar2) {
      return;
    }
    uVar4 = FUN_0183c4cc(param_1);
    if ((uVar4 & 1) == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x354) = *(undefined4 *)(param_1 + 0x358);
    return;
  }
  if (uVar2 == 0) {
    *(undefined1 *)(param_1 + 0x364) = 0;
  }
  else if (0 < param_4 && !bVar3) {
    *(undefined1 *)(param_1 + 0x364) = 1;
    FUN_0183911c(param_1,0,uVar5);
    plVar6 = *(long **)(param_1 + 0x2c0);
    goto joined_r0x01591848;
  }
  FUN_01838c14(param_1,uVar2,param_4);
  plVar6 = *(long **)(param_1 + 0x2c0);
joined_r0x01591848:
  for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
    FUN_015918a0(param_1,plVar6 + 3,uVar2 != 0,1);
  }
  if ((*(char *)(param_1 + 0x365) != '\0') &&
     (plVar6 = *(long **)(param_1 + 0x2c0), plVar6 != (long *)0x0)) {
    if (uVar2 == 0) {
      *(uint *)(plVar6 + 3) = *(uint *)(plVar6 + 3) & 0xfffff7ff;
      while( true ) {
        FUN_01839500(param_1);
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) break;
        *(uint *)(plVar6 + 3) = *(uint *)(plVar6 + 3) & 0xfffff7ff;
      }
    }
    else {
      *(uint *)(plVar6 + 3) = *(uint *)(plVar6 + 3) | 0x800;
      while( true ) {
        FUN_01839500(param_1);
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) break;
        *(uint *)(plVar6 + 3) = *(uint *)(plVar6 + 3) | 0x800;
      }
    }
  }
  return;
}


