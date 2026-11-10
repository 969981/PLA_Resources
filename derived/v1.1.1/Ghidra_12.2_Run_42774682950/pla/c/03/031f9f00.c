/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f9f00; name: FUN_031f9f00
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_031f9f00(undefined8 *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  undefined2 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  lVar2 = tpidr_el0;
  lVar7 = *(long *)(lVar2 + 0x38d490);
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar7;
    lVar9 = *(long *)(lVar7 + 0x10);
  }
  else {
    lVar9 = *(long *)(lVar7 + 0x10);
  }
  if (lVar9 != 0) {
    puVar5 = *(undefined8 **)(lVar9 + 8);
    uVar8 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
    if ((uVar8 <= *(ulong *)(lVar9 + 0x10)) &&
       (*(ulong *)(lVar9 + 8) = uVar8, puVar5 != (undefined8 *)0x0)) {
      *puVar5 = "TthkaiWorldProcessingTasks::makeMainPhaseTaskGraph";
      uVar6 = nn::os::GetSystemTick();
      puVar5[1] = uVar6;
      lVar7 = *(long *)(lVar2 + 0x38d490);
    }
  }
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar7;
  }
  plVar4 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
  puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x4c8,0);
  *puVar5 = &PTR_LAB_04350ee8;
  puVar5[1] = 0xffffffff;
  puVar5[2] = 1;
  puVar5[3] = puVar5 + 5;
  puVar5[0x65] = puVar5 + 0x67;
  puVar5[4] = 0x8000002000000000;
  puVar5[0x66] = 0x8000002000000000;
  puVar5[0x77] = puVar5 + 0x79;
  puVar5[0x78] = 0x8000002000000000;
  *param_1 = puVar5;
  if (*(char *)(param_2 + 0x28) == '\0') {
    uVar3 = 0xffff;
LAB_031f9fd0:
    if (*(char *)(param_2 + 0x4c) == '\0') goto LAB_031f9fd8;
LAB_031fa170:
    lVar10 = (long)DAT_0444b53c;
    lVar7 = *(long *)(lVar2 + 0x38d490);
    if (lVar7 == 0) {
      lVar7 = FUN_0333d16c(0,1);
      *(long *)(lVar2 + 0x38d490) = lVar7;
    }
    if (*(long *)(lVar7 + lVar10 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    uVar3 = FUN_0320c5a0(puVar5,*(undefined8 *)(param_2 + 0x90),uVar3);
    lVar10 = (long)DAT_0444b53c;
    lVar7 = *(long *)(lVar2 + 0x38d490);
    if (lVar7 == 0) {
      lVar7 = FUN_0333d16c(0,1);
      *(long *)(lVar2 + 0x38d490) = lVar7;
    }
    if (*(long *)(lVar7 + lVar10 * 8 + 0x18) == 0) goto LAB_031f9fd8;
    FUN_0332a954();
    cVar1 = *(char *)(param_2 + 0x70);
  }
  else {
    lVar10 = (long)DAT_0444b53c;
    lVar7 = *(long *)(lVar2 + 0x38d490);
    if (lVar7 == 0) {
      lVar7 = FUN_0333d16c(0,1);
      *(long *)(lVar2 + 0x38d490) = lVar7;
    }
    if (*(long *)(lVar7 + lVar10 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    uVar3 = FUN_031ffcd0(puVar5,*(undefined8 *)(param_2 + 0x88),0xffff);
    lVar10 = (long)DAT_0444b53c;
    lVar7 = *(long *)(lVar2 + 0x38d490);
    if (lVar7 == 0) {
      lVar7 = FUN_0333d16c(0,1);
      *(long *)(lVar2 + 0x38d490) = lVar7;
    }
    if (*(long *)(lVar7 + lVar10 * 8 + 0x18) != 0) {
      FUN_0332a954();
      if (*(char *)(param_2 + 0xa8) == '\0') goto LAB_031fa100;
      goto LAB_031f9fd0;
    }
    if (*(char *)(param_2 + 0xa8) != '\0') goto LAB_031f9fd0;
LAB_031fa100:
    lVar10 = (long)DAT_0444b53c;
    lVar7 = *(long *)(lVar2 + 0x38d490);
    if (lVar7 == 0) {
      lVar7 = FUN_0333d16c(0,1);
      *(long *)(lVar2 + 0x38d490) = lVar7;
    }
    if (*(long *)(lVar7 + lVar10 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    uVar3 = FUN_03202d90(puVar5,*(undefined8 *)(param_2 + 0x88),uVar3);
    lVar10 = (long)DAT_0444b53c;
    lVar7 = *(long *)(lVar2 + 0x38d490);
    if (lVar7 == 0) {
      lVar7 = FUN_0333d16c(0,1);
      *(long *)(lVar2 + 0x38d490) = lVar7;
    }
    if (*(long *)(lVar7 + lVar10 * 8 + 0x18) == 0) goto LAB_031f9fd0;
    FUN_0332a954();
    if (*(char *)(param_2 + 0x4c) != '\0') goto LAB_031fa170;
LAB_031f9fd8:
    cVar1 = *(char *)(param_2 + 0x70);
  }
  if (cVar1 != '\0') {
    lVar10 = (long)DAT_0444b53c;
    lVar7 = *(long *)(lVar2 + 0x38d490);
    if (lVar7 == 0) {
      lVar7 = FUN_0333d16c(0,1);
      *(long *)(lVar2 + 0x38d490) = lVar7;
    }
    if (*(long *)(lVar7 + lVar10 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    uVar3 = FUN_0320f310(puVar5,*(undefined8 *)(param_2 + 0x98),uVar3);
    lVar10 = (long)DAT_0444b53c;
    lVar7 = *(long *)(lVar2 + 0x38d490);
    if (lVar7 == 0) {
      lVar7 = FUN_0333d16c(0,1);
      *(long *)(lVar2 + 0x38d490) = lVar7;
    }
    if (*(long *)(lVar7 + lVar10 * 8 + 0x18) != 0) {
      FUN_0332a954();
      cVar1 = *(char *)(param_2 + 0x80);
      goto joined_r0x031fa254;
    }
  }
  cVar1 = *(char *)(param_2 + 0x80);
joined_r0x031fa254:
  if (cVar1 != '\0') {
    lVar10 = (long)DAT_0444b53c;
    lVar7 = *(long *)(lVar2 + 0x38d490);
    if (lVar7 == 0) {
      lVar7 = FUN_0333d16c(0,1);
      *(long *)(lVar2 + 0x38d490) = lVar7;
    }
    if (*(long *)(lVar7 + lVar10 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
    FUN_03212e60(puVar5,*(undefined8 *)(param_2 + 0xa0),uVar3);
    lVar10 = (long)DAT_0444b53c;
    lVar7 = *(long *)(lVar2 + 0x38d490);
    if (lVar7 == 0) {
      lVar7 = FUN_0333d16c(0,1);
      *(long *)(lVar2 + 0x38d490) = lVar7;
    }
    if (*(long *)(lVar7 + lVar10 * 8 + 0x18) != 0) {
      FUN_0332a954();
    }
  }
  if (lVar9 != 0) {
    puVar5 = *(undefined8 **)(lVar9 + 8);
    uVar8 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
    if ((uVar8 <= *(ulong *)(lVar9 + 0x10)) &&
       (*(ulong *)(lVar9 + 8) = uVar8, puVar5 != (undefined8 *)0x0)) {
      *puVar5 = &DAT_0390f40e;
      uVar6 = nn::os::GetSystemTick();
      puVar5[1] = uVar6;
    }
  }
  return;
}


