/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0191f878; name: FUN_0191f878
 */


void FUN_0191f878(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  float fVar11;
  undefined8 local_38;
  
  puVar5 = *(uint **)(*(long *)(param_1 + 0x160) + 0x250);
  piVar4 = (int *)((long)puVar5 + (ulong)*puVar5);
  if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
     (uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar6 == 0)) {
    puVar5 = (uint *)0x0;
  }
  else {
    puVar5 = (uint *)((long)piVar4 + uVar6);
    puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
  }
  plVar1 = (long *)(param_1 + 0x480);
  if (*(long *)(param_1 + 0x4d8) != 0) {
    FUN_01924324(plVar1,*(undefined8 *)(param_1 + 0x4b0));
    uVar6 = *(ulong *)(param_1 + 0x488);
    *(undefined8 *)(param_1 + 0x4b0) = 0;
    if (uVar6 != 0) {
      uVar7 = uVar6 & 3;
      if (uVar6 - 1 < 3) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        do {
          lVar8 = lVar9 * 8;
          lVar9 = lVar9 + 4;
          *(undefined8 *)(*plVar1 + lVar8) = 0;
          *(undefined8 *)(*plVar1 + lVar8 + 8) = 0;
          *(undefined8 *)(*plVar1 + lVar8 + 0x10) = 0;
          *(undefined8 *)(*plVar1 + lVar8 + 0x18) = 0;
        } while (uVar6 - uVar7 != lVar9);
      }
      if (uVar7 != 0) {
        lVar9 = lVar9 << 3;
        do {
          *(undefined8 *)(*plVar1 + lVar9) = 0;
          uVar7 = uVar7 - 1;
          lVar9 = lVar9 + 8;
        } while (uVar7 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x4d8) = 0;
  }
  fVar11 = (float)NEON_ucvtf(*puVar5);
  FUN_01924468(plVar1,(long)(fVar11 / *(float *)(param_1 + 0x4e0)));
  uVar2 = *puVar5;
  if (uVar2 != 0) {
    piVar4 = (int *)((long)(puVar5 + 1) + (ulong)puVar5[1]);
    if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
       (uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar6 == 0)) {
      local_38 = 0;
    }
    else {
      local_38 = *(undefined8 *)((long)piVar4 + uVar6);
    }
    puVar3 = (undefined4 *)FUN_019204b0(plVar1,&local_38);
    *puVar3 = 0;
    if (uVar2 != 1) {
      piVar4 = (int *)((long)(puVar5 + 2) + (ulong)puVar5[2]);
      if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
         (uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar6 == 0)) {
        local_38 = 0;
      }
      else {
        local_38 = *(undefined8 *)((long)piVar4 + uVar6);
      }
      puVar3 = (undefined4 *)FUN_019204b0(plVar1,&local_38);
      *puVar3 = 1;
      if (uVar2 != 2) {
        piVar4 = (int *)((long)(puVar5 + 3) + (ulong)puVar5[3]);
        if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
           (uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar6 == 0)) {
          local_38 = 0;
        }
        else {
          local_38 = *(undefined8 *)((long)piVar4 + uVar6);
        }
        puVar3 = (undefined4 *)FUN_019204b0(plVar1,&local_38);
        *puVar3 = 2;
        if (uVar2 != 3) {
          piVar4 = (int *)((long)(puVar5 + 4) + (ulong)puVar5[4]);
          if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
             (uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar6 == 0)) {
            local_38 = 0;
          }
          else {
            local_38 = *(undefined8 *)((long)piVar4 + uVar6);
          }
          puVar3 = (undefined4 *)FUN_019204b0(plVar1,&local_38);
          *puVar3 = 3;
          if (uVar2 != 4) {
            piVar4 = (int *)((long)(puVar5 + 5) + (ulong)puVar5[5]);
            if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 5) ||
               (uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar6 == 0)) {
              local_38 = 0;
            }
            else {
              local_38 = *(undefined8 *)((long)piVar4 + uVar6);
            }
            puVar3 = (undefined4 *)FUN_019204b0(plVar1,&local_38);
            *puVar3 = 4;
            if (uVar2 != 5) {
              lVar9 = 0;
              iVar10 = 5;
              do {
                uVar6 = (ulong)*(uint *)((long)puVar5 + lVar9 + 0x18);
                lVar8 = lVar9 + (uVar6 - (long)*(int *)((long)puVar5 + lVar9 + uVar6 + 0x18));
                if ((*(ushort *)((long)puVar5 + lVar8 + 0x18) < 5) ||
                   (uVar7 = (ulong)*(ushort *)((long)puVar5 + lVar8 + 0x1c), uVar7 == 0)) {
                  local_38 = 0;
                }
                else {
                  local_38 = *(undefined8 *)((long)puVar5 + lVar9 + uVar6 + uVar7 + 0x18);
                }
                piVar4 = (int *)FUN_019204b0(plVar1,&local_38);
                lVar9 = lVar9 + 4;
                *piVar4 = iVar10;
                iVar10 = iVar10 + 1;
              } while ((ulong)uVar2 * 4 + -0x14 != lVar9);
            }
          }
        }
      }
    }
  }
  return;
}


