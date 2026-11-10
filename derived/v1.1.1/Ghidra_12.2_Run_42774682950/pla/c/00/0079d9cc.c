/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0079d9cc; name: FUN_0079d9cc
 */


void FUN_0079d9cc(long param_1)

{
  byte *pbVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  byte *pbVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long local_68;
  long lStack_60;
  long local_50;
  long lStack_48;
  
  lStack_48 = *(long *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_0079bf44(&local_50,*(undefined8 *)(lStack_48 + 0x18));
  puVar2 = PTR_LAB_04373088;
  lVar3 = lStack_48;
  pbVar1 = PTR_DAT_043730c0;
  lVar8 = lStack_60;
  local_68 = local_50;
  while (lStack_60 = lVar3, PTR_DAT_043730c0 = pbVar1, local_68 != 0) {
    lVar8 = *(long *)(local_68 + 8);
    lStack_48 = lStack_60;
    FUN_007a04dc(&local_68);
    FUN_007a028c(*(undefined8 *)(param_1 + 0x38),&local_50);
    if ((lVar8 != 0) && (*(long *)(param_1 + 0x28) == 0)) {
      FUN_002e2ea0(puVar2,lVar8);
    }
    lVar3 = lStack_60;
    pbVar1 = PTR_DAT_043730c0;
    lVar8 = lStack_60;
  }
  pbVar5 = *(byte **)(param_1 + 0x40);
  if (pbVar5 == pbVar1) {
LAB_0079da9c:
    pbVar5 = *(byte **)(param_1 + 0x48);
    if (pbVar5 == pbVar1) goto LAB_0079daec;
LAB_0079daa8:
    if ((*pbVar5 & 1) != 0) {
      **(undefined1 **)(pbVar5 + 0x10) = 0;
      pbVar5[8] = 0;
      pbVar5[9] = 0;
      pbVar5[10] = 0;
      pbVar5[0xb] = 0;
      pbVar5[0xc] = 0;
      pbVar5[0xd] = 0;
      pbVar5[0xe] = 0;
      pbVar5[0xf] = 0;
      goto LAB_0079daec;
    }
    pbVar5[0] = 0;
    pbVar5[1] = 0;
    pbVar5 = *(byte **)(param_1 + 0x50);
    if (pbVar5 != pbVar1) goto LAB_0079daf8;
LAB_0079db04:
    pbVar5 = *(byte **)(param_1 + 0x58);
  }
  else {
    if ((*pbVar5 & 1) == 0) {
      pbVar5[0] = 0;
      pbVar5[1] = 0;
      goto LAB_0079da9c;
    }
    **(undefined1 **)(pbVar5 + 0x10) = 0;
    pbVar5[8] = 0;
    pbVar5[9] = 0;
    pbVar5[10] = 0;
    pbVar5[0xb] = 0;
    pbVar5[0xc] = 0;
    pbVar5[0xd] = 0;
    pbVar5[0xe] = 0;
    pbVar5[0xf] = 0;
    pbVar5 = *(byte **)(param_1 + 0x48);
    if (pbVar5 != pbVar1) goto LAB_0079daa8;
LAB_0079daec:
    pbVar5 = *(byte **)(param_1 + 0x50);
    if (pbVar5 == pbVar1) goto LAB_0079db04;
LAB_0079daf8:
    if ((*pbVar5 & 1) == 0) {
      pbVar5[0] = 0;
      pbVar5[1] = 0;
      goto LAB_0079db04;
    }
    **(undefined1 **)(pbVar5 + 0x10) = 0;
    pbVar5[8] = 0;
    pbVar5[9] = 0;
    pbVar5[10] = 0;
    pbVar5[0xb] = 0;
    pbVar5[0xc] = 0;
    pbVar5[0xd] = 0;
    pbVar5[0xe] = 0;
    pbVar5[0xf] = 0;
    pbVar5 = *(byte **)(param_1 + 0x58);
  }
  if (pbVar5 != pbVar1) {
    if ((*pbVar5 & 1) == 0) {
      pbVar5[0] = 0;
      pbVar5[1] = 0;
      uVar6 = *(ulong *)(param_1 + 8);
      goto joined_r0x0079db24;
    }
    **(undefined1 **)(pbVar5 + 0x10) = 0;
    pbVar5[8] = 0;
    pbVar5[9] = 0;
    pbVar5[10] = 0;
    pbVar5[0xb] = 0;
    pbVar5[0xc] = 0;
    pbVar5[0xd] = 0;
    pbVar5[0xe] = 0;
    pbVar5[0xf] = 0;
  }
  uVar6 = *(ulong *)(param_1 + 8);
joined_r0x0079db24:
  plVar4 = (long *)(uVar6 & 0xfffffffffffffffe);
  if ((uVar6 & 1) == 0) {
    plVar7 = plVar4;
  }
  else {
    plVar7 = (long *)*plVar4;
  }
  lStack_60 = lVar8;
  if ((plVar7 == (long *)0x0) && (lVar8 = *(long *)(param_1 + 0x60), lVar8 != 0)) {
    FUN_00602294(lVar8);
    FUN_002e2ea0(PTR_LAB_04373088,lVar8);
    uVar6 = *(ulong *)(param_1 + 8);
    plVar4 = (long *)(uVar6 & 0xfffffffffffffffe);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  if ((uVar6 & 1) != 0) {
    plVar4 = (long *)*plVar4;
  }
  if ((plVar4 == (long *)0x0) && (lVar8 = *(long *)(param_1 + 0x68), lVar8 != 0)) {
    FUN_00602294(lVar8);
    FUN_002e2ea0(PTR_LAB_04373088,lVar8);
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN_0079d6a4(param_1);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if ((*(byte *)(uVar6 + 8) & 1) == 0) {
      *(undefined2 *)(uVar6 + 8) = 0;
    }
    else {
      **(undefined1 **)(uVar6 + 0x18) = 0;
      *(undefined8 *)(uVar6 + 0x10) = 0;
    }
  }
  return;
}


