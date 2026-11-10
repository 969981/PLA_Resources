/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028e1dd8; name: FUN_028e1dd8
 */


void FUN_028e1dd8(undefined8 param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long *local_78;
  
  uVar4 = (**(code **)(*(long *)param_2[9] + 0x10))();
  if ((uVar4 & 1) != 0) {
    (**(code **)(*(long *)param_2[9] + 0x98))(param_1);
  }
  if ((long *)param_2[0xb] != (long *)0x0) {
    (**(code **)(*(long *)param_2[0xb] + 0x70))(param_1);
    if (((long *)param_2[0xb] != (long *)0x0) &&
       (uVar4 = (**(code **)(*(long *)param_2[0xb] + 0x68))(), (uVar4 & 1) == 0)) {
      param_2[0xb] = 0;
    }
  }
  if ((long *)param_2[2] == (long *)0x0) {
    return;
  }
  if ((char)param_2[0xc] == '\x02') {
    return;
  }
  if ((char)param_2[0xc] == '\x01') {
    plVar5 = (long *)(**(code **)(*(long *)param_2[2] + 0x38))();
    if ((plVar5 == (long *)0x0) || (lVar6 = (**(code **)(*plVar5 + 0x50))(), lVar6 == 0)) {
      *(undefined1 *)(param_2 + 0xc) = 2;
      return;
    }
    return;
  }
  uVar13 = *(undefined4 *)((long)param_2 + 100);
  uVar4 = (**(code **)(*(long *)param_2[9] + 0x10))();
  if ((uVar4 & 1) == 0) {
    if (((long *)param_2[10] == (long *)0x0) ||
       (uVar4 = (**(code **)(*(long *)param_2[10] + 0x148))(), (uVar4 & 1) == 0)) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0x3f800000;
    }
  }
  else {
    uVar12 = (**(code **)(*(long *)param_2[9] + 0x68))();
  }
  plVar5 = (long *)param_2[0xe];
  *(int *)((long)param_2 + 100) = (int)uVar12;
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)(**(code **)(*(long *)param_2[2] + 0x100))();
    param_2[0xe] = (long)plVar5;
    if (plVar5 == (long *)0x0) goto LAB_028e1fb4;
  }
  plVar5 = (long *)(**(code **)(*plVar5 + 0x110))(uVar13,uVar12);
  if (plVar5 != (long *)0x0) {
    puVar7 = (undefined8 *)(**(code **)(*plVar5 + 0x10))();
    local_90 = *puVar7;
    local_88 = puVar7[1];
    local_80 = puVar7[2];
    local_78 = (long *)puVar7[3];
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x18))();
    }
    plVar8 = (long *)(**(code **)(*(long *)param_2[2] + 0x108))((long *)param_2[2],&local_90);
    bVar2 = (**(code **)(*plVar5 + 0x50))(plVar5);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    if ((param_2 == plVar8 & (bVar2 ^ 1)) == 0) {
LAB_028e2058:
      puVar7 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5);
      local_90 = *puVar7;
      local_88 = puVar7[1];
      local_80 = puVar7[2];
      local_78 = (long *)puVar7[3];
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x18))();
      }
      plVar8 = (long *)(**(code **)(*(long *)param_2[2] + 0x108))((long *)param_2[2],&local_90);
      uVar4 = (**(code **)(*plVar5 + 0x50))(plVar5);
      if ((param_2 != plVar8) || ((uVar4 & 1) != 0)) {
        (**(code **)(*plVar5 + 0xa8))(plVar5);
        iVar3 = (**(code **)(*plVar8 + 0x30))(plVar8);
        if (iVar3 == 3) {
          plVar5 = (long *)(**(code **)(*(long *)param_2[2] + 0x38))();
          if ((plVar5 == (long *)0x0) || (lVar6 = (**(code **)(*plVar5 + 0x50))(), lVar6 == 0)) {
            *(undefined1 *)(param_2 + 0xc) = 2;
          }
          else {
            *(undefined1 *)(param_2 + 0xc) = 1;
          }
        }
        else {
          (**(code **)(*plVar8 + 0x140))(plVar8,0);
          (**(code **)(*(long *)param_2[2] + 0x120))
                    (param_1,(long *)param_2[2],param_2,plVar8,plVar5);
        }
      }
      if (local_78 == (long *)0x0) {
        return;
      }
      (**(code **)(*local_78 + 0x20))();
      return;
    }
  }
LAB_028e1fb4:
  if (param_2[7] != 0) {
    iVar3 = (**(code **)(*(long *)param_2[1] + 0x30))();
    lVar9 = (**(code **)(*(long *)param_2[2] + 0x50))();
    lVar6 = param_2[7];
    lVar1 = param_2[8];
    if (lVar6 * lVar1 != 0) {
      plVar8 = (long *)param_2[6];
      lVar11 = 0;
      plVar5 = plVar8;
      do {
        plVar10 = (long *)(**(code **)(*(long *)param_2[2] + 0x50))();
        if ((plVar10 != plVar5) &&
           (uVar4 = (**(code **)(*plVar5 + 0x58))(uVar13,uVar12,plVar5,iVar3 == 2,lVar9 != 0),
           (uVar4 & 1) != 0)) {
          if (plVar5 == (long *)0x0) {
            return;
          }
          goto LAB_028e2058;
        }
        plVar5 = (long *)((long)plVar8 + lVar11 + lVar1);
        lVar11 = lVar11 + lVar1;
      } while (lVar6 * lVar1 != lVar11);
    }
  }
  return;
}


