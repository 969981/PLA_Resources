/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a61b8; name: FUN_031a61b8
 */


void FUN_031a61b8(undefined8 *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 local_40;
  undefined2 local_3c;
  
  *param_1 = &PTR_LAB_04300620;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 1;
  param_1[4] = 0;
  param_1[5] = 0x8000000000000000;
  param_1[0xe] = &PTR_LAB_0430b3b0;
  *(undefined8 *)((long)param_1 + 0xb4) = 0x1000000ffffffff;
  *(undefined8 *)((long)param_1 + 0xbc) = 0x3a83126f;
  param_1[0x1e] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x22) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0x101000001030100;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((long)param_1 + 0x114) = 0x3c23d70a3f800000;
  *(undefined8 *)((long)param_1 + 0x11c) = 0xbf8000007f7fffee;
  *(undefined4 *)((long)param_1 + 0x124) = 0xbf800000;
  param_1[0x30] = 0;
  param_1[0x42] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0x8000000000000000;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0x3e80000040a00000;
  param_1[0x2c] = 0x3f0000003f800000;
  param_1[0x2d] = 0x3f8000003f000000;
  *(undefined4 *)(param_1 + 0x2e) = 0x3f800000;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  lVar7 = param_2;
  if (param_2 == 0) {
    param_1[0x30] = 0;
  }
  else if (*(long *)(param_2 + 8) == 0) {
    param_1[0x30] = param_2;
  }
  else {
    plVar5 = (long *)(param_2 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = *plVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar5 = (long *)param_1[0x30];
    param_1[0x30] = param_2;
    if (plVar5 != (long *)0x0) {
      if (plVar5[1] != 0) {
        plVar2 = plVar5 + 2;
        do {
          lVar7 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))();
        }
      }
      lVar7 = param_1[0x30];
    }
  }
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)((long)param_1 + 0x61) = 0;
  *(undefined1 *)(param_1 + 0x43) = 0;
  uVar11 = *(undefined8 *)(param_2 + 0x128);
  uVar10 = *(undefined8 *)(param_2 + 0x120);
  *(undefined1 *)(param_1 + 0x52) = 0xb;
  param_1[0x18] = 0;
  param_1[0x32] = 1;
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0x13] = uVar11;
  param_1[0x12] = uVar10;
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 600);
  local_40 = 0x8000010;
  local_3c = 0x29;
  FUN_031aa380(lVar7 + 0x28,lVar7,&local_40);
  lVar8 = param_1[0x30];
  lVar9 = *(long *)(lVar8 + 0x438);
  *(undefined4 *)((long)param_1 + 0x23c) = *(undefined4 *)(lVar9 + 0x28);
  iVar6 = *(int *)(lVar9 + 0x28);
  lVar7 = *(long *)(lVar9 + 0x20);
  iVar1 = iVar6 + 1;
  if ((int)(*(uint *)(lVar9 + 0x2c) & 0x3fffffff) <= iVar6) {
    lVar7 = FUN_031f70bc(PTR_PTR_0434a080,iVar1);
    iVar6 = *(int *)(lVar9 + 0x28);
    *(long *)(lVar9 + 0x20) = lVar7;
  }
  *(undefined8 **)(lVar7 + (long)iVar6 * 8) = param_1;
  *(int *)(lVar9 + 0x28) = iVar1;
  FUN_03219418(lVar8 + 0xf8,lVar8,param_1);
  return;
}


