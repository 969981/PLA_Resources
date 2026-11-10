/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00278304; name: FUN_00278304
 */


void FUN_00278304(long param_1,long param_2)

{
  uint *puVar1;
  undefined *puVar2;
  int *piVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  long *plVar9;
  int *piVar10;
  undefined8 uVar11;
  int *piVar12;
  int iVar13;
  long lVar14;
  undefined8 local_50;
  undefined8 uStack_48;
  
  piVar10 = (int *)(param_2 + (ulong)*(uint *)(param_2 + 8));
  if (*(uint *)(param_2 + 8) == 0xffffffff || piVar10 == (int *)0x0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  else {
    uVar8 = 0;
    do {
      puVar1 = (uint *)(piVar10 + 3);
      if (*piVar10 == 0x4d495250) {
        uVar8 = uVar8 + 1;
      }
      piVar12 = (int *)((long)piVar10 + (ulong)*puVar1);
      piVar10 = (int *)0x0;
      if (*puVar1 != 0xffffffff) {
        piVar10 = piVar12;
      }
    } while (piVar10 != (int *)0x0);
    *(uint *)(param_1 + 0x68) = uVar8;
    if (uVar8 != 0) {
      lVar14 = (ulong)uVar8 * 0x98 + 0x20;
      plVar4 = (long *)(**(code **)(**(long **)(param_1 + 0x458) + 0x10))
                                 (*(long **)(param_1 + 0x458),lVar14,0x80);
      *(long *)(param_1 + 0x460) = *(long *)(param_1 + 0x460) + lVar14;
      iVar13 = *(int *)(param_1 + 0x68);
      *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + 1;
      *(long **)(param_1 + 0x70) = plVar4;
      if (iVar13 != 0) {
        puVar2 = PTR_DAT_04372f18 + 0x10;
        plVar9 = plVar4;
        do {
          *plVar9 = (long)puVar2;
          *(undefined1 *)(plVar9 + 1) = 0;
          *(undefined8 *)((long)plVar9 + 0xc) = 0;
          *(undefined8 *)((long)plVar9 + 0x14) = 0;
          *(undefined8 *)((long)plVar9 + 0x1c) = 0;
          *(undefined8 *)((long)plVar9 + 0x24) = 0;
          *(undefined8 *)((long)plVar9 + 0x2c) = 0;
          *(undefined8 *)((long)plVar9 + 0x34) = 0;
          *(undefined8 *)((long)plVar9 + 0x3c) = 0;
          *(undefined8 *)((long)plVar9 + 0x44) = 0;
          *(undefined8 *)((long)plVar9 + 0x4c) = 0;
          *(undefined4 *)((long)plVar9 + 0x54) = 0;
          plVar9 = plVar9 + 0x13;
        } while (plVar9 != plVar4 + (long)iVar13 * 0x13);
      }
      *(long **)(param_1 + 0x78) = plVar4;
      piVar10 = (int *)0x0;
      if ((*(uint *)(param_2 + 8) != 0xffffffff) &&
         (piVar12 = (int *)(param_2 + (ulong)*(uint *)(param_2 + 8)), piVar12 != (int *)0x0)) {
        piVar10 = piVar12;
        do {
          if (*piVar10 == 0x4d495250) break;
          puVar1 = (uint *)(piVar10 + 3);
          piVar12 = (int *)((long)piVar10 + (ulong)*puVar1);
          piVar10 = (int *)0x0;
          if (*puVar1 != 0xffffffff) {
            piVar10 = piVar12;
          }
        } while (piVar10 != (int *)0x0);
      }
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      local_50 = 0;
      uStack_48 = 0;
      FUN_00876ba8(&local_50);
      local_50 = CONCAT44(4,(undefined4)local_50);
      lVar5 = FUN_00877190(uVar11,&local_50);
      lVar14 = 0;
      if (piVar10 != (int *)0x0) {
        piVar12 = piVar10;
        do {
          lVar6 = FUN_002798ec(piVar12);
          lVar14 = (lVar5 + -1 + lVar6 & -lVar5) + lVar14;
          puVar1 = (uint *)(piVar12 + 3);
          piVar3 = (int *)((long)piVar12 + (ulong)*puVar1);
          piVar12 = (int *)0x0;
          if (*puVar1 != 0xffffffff) {
            piVar12 = piVar3;
          }
        } while (piVar12 != (int *)0x0);
      }
      lVar5 = param_1 + 0x2a0;
      uVar7 = FUN_0028d284(lVar5,*(undefined8 *)(param_1 + 0x10),param_1 + 0x450,4,lVar14);
      if ((uVar7 & 1) != 0) {
        FUN_00877434(lVar5,param_1 + 0x430);
      }
      *(undefined8 *)(param_1 + 0x440) = 0;
      uVar11 = FUN_008773dc(lVar5);
      *(undefined8 *)(param_1 + 0x448) = uVar11;
      if (piVar10 != (int *)0x0) {
        lVar14 = 0;
        iVar13 = 0;
        do {
          uVar7 = FUN_00279990(*(long *)(param_1 + 0x78) + lVar14,lVar5,piVar10);
          if ((uVar7 & 1) == 0) {
            FUN_00271770("Faild to initialize primitive: Index %d \n",iVar13);
            uVar8 = piVar10[3];
          }
          else {
            *(ulong *)(param_1 + 0xe0) = *(long *)(param_1 + 0xe0) + (ulong)(uint)piVar10[1];
            uVar8 = piVar10[3];
          }
          if (uVar8 == 0xffffffff) break;
          piVar10 = (int *)((long)piVar10 + (ulong)uVar8);
          iVar13 = iVar13 + 1;
          lVar14 = lVar14 + 0x98;
        } while (piVar10 != (int *)0x0);
      }
      FUN_008773f4(lVar5,0,*(undefined8 *)(param_1 + 0x2e8));
      FUN_008773f0(lVar5);
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  return;
}


