/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e595ec; name: FUN_02e595ec
 */


void FUN_02e595ec(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,long param_6,long param_7,long param_8)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  
  *(undefined4 *)(param_8 + 0x18) = 0;
  *(undefined2 *)(param_8 + 0xc) = 0;
  if ((int)param_1[1] != 0) {
    uVar9 = 0;
    lVar1 = param_8 + 0x10;
    do {
      lVar7 = *param_1;
      plVar11 = (long *)(lVar7 + uVar9 * 0x90);
      uVar6 = (ulong)(*(uint *)(plVar11 + 0x10) - 1);
      if ((*(long *)(plVar11[uVar6] + 0x40) == param_6) &&
         (*(long *)(*(long *)(lVar7 + uVar9 * 0x90 + uVar6 * 8 + 0x40) + 0x40) != param_7)) {
        lVar3 = FUN_02e5312c(param_3,*(undefined8 *)(*plVar11 + 0x40),&local_70);
        if ((lVar3 != 0 && (char)local_70 != '\0') &&
           ((*(int *)(lVar3 + 0x20) != 0 && (*(char *)(lVar3 + 0x15) == '\0')))) {
          lVar8 = *(long *)(lVar3 + 0x18);
          if (*(uint *)(plVar11 + 0x10) < 2) {
            do {
              puVar5 = (undefined8 *)FUN_02e447a8(lVar1);
              if (puVar5 != (undefined8 *)0x0) {
                uVar2 = *(undefined4 *)(param_2 + 1);
                *puVar5 = *param_2;
                *(undefined4 *)(puVar5 + 1) = uVar2;
                FUN_02e57f1c(puVar5,lVar8,lVar8 + 0x6c,param_4);
                local_70 = *(undefined4 *)(param_5 + 0x18);
                local_6c = *(undefined4 *)(param_5 + 0x1c);
                local_68 = *(undefined4 *)(param_5 + 0x20);
                FUN_02e581bc(puVar5,plVar11,0,&local_70,1);
                FUN_02e5880c(puVar5,param_5);
                if (*(float *)((long)puVar5 + 0x7c) < 0.001) {
                  *(undefined1 *)(param_8 + 0xc) = 1;
                }
              }
              lVar8 = lVar8 + 0x8c;
            } while (lVar8 != *(long *)(lVar3 + 0x18) + (ulong)*(uint *)(lVar3 + 0x20) * 0x8c);
          }
          else {
            lVar7 = lVar7 + uVar9 * 0x90;
            do {
              lVar4 = FUN_02e52ab8(*(long *)(lVar7 + 0x48),*plVar11,*(undefined8 *)(lVar7 + 8));
              if (lVar4 == 0) {
                puVar5 = (undefined8 *)FUN_02e447a8(lVar1);
                if (puVar5 != (undefined8 *)0x0) {
                  uVar2 = *(undefined4 *)(param_2 + 1);
                  *puVar5 = *param_2;
                  *(undefined4 *)(puVar5 + 1) = uVar2;
                  FUN_02e57f1c(puVar5,lVar8,lVar8 + 0x6c,param_4);
                  local_70 = *(undefined4 *)(param_5 + 0x18);
                  local_6c = *(undefined4 *)(param_5 + 0x1c);
                  local_68 = *(undefined4 *)(param_5 + 0x20);
                  FUN_02e581bc(puVar5,plVar11,0,&local_70,0);
                  FUN_02e5880c(puVar5,param_5);
                  if (*(float *)((long)puVar5 + 0x7c) < 0.001) {
                    *(undefined1 *)(param_8 + 0xc) = 1;
                  }
                }
              }
              else if (*(int *)(lVar4 + 0x18) != 0) {
                lVar10 = *(long *)(lVar4 + 0x10);
                do {
                  puVar5 = (undefined8 *)FUN_02e447a8(lVar1);
                  if (puVar5 != (undefined8 *)0x0) {
                    uVar2 = *(undefined4 *)(param_2 + 1);
                    *puVar5 = *param_2;
                    *(undefined4 *)(puVar5 + 1) = uVar2;
                    FUN_02e57f1c(puVar5,lVar8,lVar8 + 0x6c,param_4);
                    FUN_02e58074(puVar5,lVar10,*plVar11,*(undefined8 *)(lVar7 + 8),
                                 *(undefined8 *)(*(long *)(lVar7 + 0x40) + 0x40),
                                 *(undefined8 *)(*(long *)(lVar7 + 0x48) + 0x40));
                    local_70 = *(undefined4 *)(param_5 + 0x18);
                    local_6c = *(undefined4 *)(param_5 + 0x1c);
                    local_68 = *(undefined4 *)(param_5 + 0x20);
                    FUN_02e581bc(puVar5,plVar11,1,&local_70,1);
                    FUN_02e5880c(puVar5,param_5);
                    if (*(float *)((long)puVar5 + 0x7c) < 0.001) {
                      *(undefined1 *)(param_8 + 0xc) = 1;
                    }
                  }
                  lVar10 = lVar10 + 0x8c;
                } while (lVar10 != *(long *)(lVar4 + 0x10) + (ulong)*(uint *)(lVar4 + 0x18) * 0x8c);
              }
              lVar8 = lVar8 + 0x8c;
            } while (lVar8 != *(long *)(lVar3 + 0x18) + (ulong)*(uint *)(lVar3 + 0x20) * 0x8c);
          }
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(param_1 + 1));
    if ((*(uint *)(param_1 + 1) != 0) && (*(int *)(param_8 + 0x18) == 0)) {
      *(undefined1 *)(param_8 + 0xd) = 1;
      FUN_02e58d54(param_8,param_2,param_5);
    }
  }
  return;
}


