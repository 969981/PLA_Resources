/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333c9a8; name: FUN_0333c9a8
 */


/* WARNING: Removing unreachable block (ram,0x0333caa4) */

void FUN_0333c9a8(long *param_1,undefined8 *param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 local_48;
  
  if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0333c9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x60))(param_1,*param_2);
    return;
  }
  if ((int)param_3 < 2) {
    return;
  }
  (**(code **)(*param_1 + 0x18))(param_1,&local_48,1,8);
  (**(code **)(*param_1 + 0x28))(param_1,local_48,0,0x40);
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x38d490);
  if (lVar3 == 0) {
    lVar3 = FUN_0333d16c(0,1);
    *(long *)(lVar1 + 0x38d490) = lVar3;
  }
  lVar3 = *(long *)(lVar3 + 8);
  uVar6 = (ulong)(int)(param_3 * 0x10 + 0x7f & 0xffffff80);
  if (*(ulong *)(lVar3 + 0x10) < uVar6) {
LAB_0333cbd8:
    lVar2 = FUN_032ce670(lVar3,uVar6);
  }
  else {
    lVar2 = *(long *)(lVar3 + 0x18);
    if (*(ulong *)(lVar3 + 0x20) < lVar2 + uVar6) goto LAB_0333cbd8;
    *(ulong *)(lVar3 + 0x18) = lVar2 + uVar6;
  }
  if (param_3 == 1) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    puVar5 = (undefined8 *)(lVar2 + 0x10);
    puVar4 = param_2 + 1;
    do {
      puVar5[-2] = puVar4[-1];
      puVar5[-1] = local_48;
      *puVar5 = *puVar4;
      lVar3 = lVar3 + 2;
      puVar5[1] = local_48;
      puVar5 = puVar5 + 4;
      puVar4 = puVar4 + 2;
    } while ((ulong)param_3 - ((ulong)param_3 & 1) != lVar3);
    if ((param_3 & 1) == 0) goto LAB_0333cb00;
  }
  puVar5 = (undefined8 *)(lVar2 + lVar3 * 0x10);
  *puVar5 = param_2[lVar3];
  puVar5[1] = local_48;
LAB_0333cb00:
  (**(code **)(*param_1 + 0x48))(param_1,lVar2,param_3);
  (**(code **)(*param_1 + 0x50))(param_1,&local_48,1,0,8);
  (**(code **)(*param_1 + 0x60))(param_1,local_48);
  (**(code **)(*param_1 + 0x20))(param_1,&local_48,1,8);
  lVar3 = *(long *)(lVar1 + 0x38d490);
  if (lVar3 == 0) {
    lVar3 = FUN_0333d16c(0,1);
    *(long *)(lVar1 + 0x38d490) = lVar3;
  }
  lVar1 = *(long *)(lVar3 + 8);
  if (((*(ulong *)(lVar1 + 0x10) < uVar6) || (*(long *)(lVar1 + 0x18) != lVar2 + uVar6)) ||
     (*(long *)(lVar1 + 0x28) == lVar2)) {
    FUN_032cedf0(lVar1,lVar2,uVar6);
  }
  else {
    *(long *)(lVar1 + 0x18) = lVar2;
  }
  return;
}


