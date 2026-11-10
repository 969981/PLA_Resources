/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bf75bc; name: FUN_02bf75bc
 */


uint FUN_02bf75bc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,uint param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  size_t sVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong *puVar15;
  long *plVar16;
  ulong uVar17;
  char *pcVar18;
  ulong uVar19;
  undefined **local_5b0;
  byte local_5a8;
  uint local_5a4;
  undefined8 local_5a0;
  undefined1 local_598;
  undefined1 *local_590;
  undefined8 local_588;
  undefined1 local_570 [1296];
  
  puVar5 = PTR_FUN_042afee8;
  local_5a8 = 0;
  local_590 = local_570;
  local_5a4 = 0;
  local_598 = 0;
  local_5b0 = &PTR_LAB_042afed0;
  local_588 = -0x7ffffff600000000;
  local_5a0 = 0x5f7ffff05f7ffff0;
  (*(code *)PTR_FUN_042afee8)(&local_5b0);
  local_5a8 = local_5a8 | 0x40;
  (**(code **)(**(long **)(param_1 + 8) + 0x3e0))
            (*(long **)(param_1 + 8),param_2,param_3,&local_5b0);
  if (1 < (int)local_588) {
    FUN_02f6c0d0(local_590,0,(int)local_588 + -1);
  }
  puVar6 = PTR_PTR_0434a080;
  if (local_5a4 <= param_5) {
    param_5 = local_5a4;
  }
  if (param_5 != 0) {
    uVar19 = 0;
    do {
      puVar2 = (undefined8 *)(local_590 + uVar19 * 0x80);
      uVar13 = *puVar2;
      puVar10 = (undefined8 *)(param_4 + uVar19 * 0xc0);
      puVar10[1] = puVar2[1] & 0xffffffff;
      *puVar10 = uVar13;
      uVar14 = puVar2[3];
      uVar13 = puVar2[2];
      puVar10[3] = uVar14 & 0xffffffff;
      puVar10[2] = uVar13;
      *(undefined4 *)((long)puVar10 + 0x24) = *(undefined4 *)(puVar2 + 0xb);
      *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(puVar2 + 4);
      puVar10[5] = *(undefined8 *)
                    (*(long *)(*(long *)(param_1 + 8) + 0x38) + (puVar2[0xb] & 0xffffff) * 0xc0 +
                    0x98);
      uVar17 = (ulong)*(ushort *)(puVar2 + 0xd);
      if (uVar17 != 0xffff) {
        lVar7 = (**(code **)(**(long **)(param_1 + 8) + 0xa0))(uVar13,uVar14 & 0xffffffff,0);
        lVar7 = *(long *)(lVar7 + 0x48);
        pcVar18 = (char *)(*(ulong *)(lVar7 + uVar17 * 0x50) & 0xfffffffffffffffe);
        if (pcVar18 == (char *)0x0) {
          uVar14 = 0;
        }
        else {
          sVar8 = strlen(pcVar18);
          uVar1 = (int)sVar8 + 1;
          puVar10 = (undefined8 *)
                    (**(code **)(*(long *)puVar6 + 0x10))
                              (puVar6,(long)((sVar8 << 0x20) + 0x1100000000) >> 0x20,0);
          *puVar10 = puVar6;
          *(uint *)(puVar10 + 1) = uVar1;
          memcpy(puVar10 + 2,pcVar18,(ulong)uVar1);
          uVar14 = (ulong)(puVar10 + 2) | 1;
        }
        puVar10 = (undefined8 *)(lVar7 + uVar17 * 0x50 + 8);
        plVar16 = (long *)*puVar10;
        if ((plVar16 != (long *)0x0) && (plVar16[1] != 0)) {
          plVar16 = plVar16 + 2;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar4) {
              *plVar16 = *plVar16 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          plVar16 = (long *)*puVar10;
        }
        puVar15 = (ulong *)(param_4 + uVar19 * 0xc0 + 0x30);
        uVar17 = *puVar15;
        pcVar18 = (char *)(uVar14 & 0xfffffffffffffffe);
        if ((char *)(uVar17 & 0xfffffffffffffffe) != pcVar18) {
          if (pcVar18 == (char *)0x0) {
            uVar12 = 0;
          }
          else {
            sVar8 = strlen(pcVar18);
            uVar1 = (int)sVar8 + 1;
            puVar10 = (undefined8 *)
                      (**(code **)(*(long *)puVar6 + 0x10))
                                (puVar6,(long)((sVar8 << 0x20) + 0x1100000000) >> 0x20,0);
            *puVar10 = puVar6;
            *(uint *)(puVar10 + 1) = uVar1;
            memcpy(puVar10 + 2,pcVar18,(ulong)uVar1);
            uVar12 = (ulong)(puVar10 + 2) | 1;
          }
          *puVar15 = uVar12;
          if ((uVar17 & 1) != 0) {
            lVar7 = tpidr_el0;
            lVar11 = *(long *)(lVar7 + 0x38d490);
            if (lVar11 == 0) {
              lVar11 = FUN_0333d16c(0,1);
              *(long *)(lVar7 + 0x38d490) = lVar11;
            }
            plVar9 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
            *(undefined8 *)(uVar17 - 0x11) = 0;
            (**(code **)(*plVar9 + 0x18))
                      (plVar9,(undefined8 *)(uVar17 - 0x11),(long)*(int *)(uVar17 - 9) + 0x10);
          }
        }
        uVar13 = *puVar2;
        lVar7 = param_4 + uVar19 * 0xc0;
        *(undefined8 *)(lVar7 + 0x48) = puVar2[1];
        *(undefined8 *)(lVar7 + 0x40) = uVar13;
        uVar13 = puVar2[2];
        *(undefined8 *)(lVar7 + 0x58) = puVar2[3];
        *(undefined8 *)(lVar7 + 0x50) = uVar13;
        *(undefined4 *)(lVar7 + 0x60) = *(undefined4 *)(puVar2 + 4);
        uVar13 = puVar2[5];
        *(undefined4 *)(lVar7 + 0x70) = *(undefined4 *)(puVar2 + 6);
        *(undefined8 *)(lVar7 + 0x68) = uVar13;
        *(undefined4 *)(lVar7 + 0x78) = *(undefined4 *)(puVar2 + 7);
        *(undefined1 *)(lVar7 + 0x7c) = *(undefined1 *)((long)puVar2 + 0x3c);
        *(undefined2 *)(lVar7 + 0x80) = *(undefined2 *)(puVar2 + 8);
        uVar13 = *(undefined8 *)((long)puVar2 + 0x44);
        *(undefined4 *)(lVar7 + 0x8c) = *(undefined4 *)((long)puVar2 + 0x4c);
        *(undefined8 *)(lVar7 + 0x84) = uVar13;
        uVar13 = puVar2[10];
        *(undefined4 *)(lVar7 + 0x98) = *(undefined4 *)(puVar2 + 0xb);
        *(undefined8 *)(lVar7 + 0x90) = uVar13;
        *(undefined4 *)(lVar7 + 0xa0) = *(undefined4 *)(puVar2 + 0xc);
        *(undefined1 *)(lVar7 + 0xa4) = *(undefined1 *)((long)puVar2 + 100);
        *(ushort *)(lVar7 + 0xa8) = *(ushort *)(puVar2 + 0xd);
        uVar13 = *(undefined8 *)((long)puVar2 + 0x6c);
        *(undefined4 *)(lVar7 + 0xb4) = *(undefined4 *)((long)puVar2 + 0x74);
        *(undefined8 *)(lVar7 + 0xac) = uVar13;
        *(undefined8 *)(lVar7 + 0xb8) = puVar2[0xf];
        if ((plVar16 != (long *)0x0) && (plVar16[1] != 0)) {
          plVar9 = plVar16 + 2;
          do {
            lVar7 = *plVar9;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar4) {
              *plVar9 = lVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar7 + -1 == 0) {
            (**(code **)(*plVar16 + 0x18))(plVar16);
          }
        }
        if ((uVar14 & 1) != 0) {
          lVar7 = tpidr_el0;
          lVar11 = *(long *)(lVar7 + 0x38d490);
          if (lVar11 == 0) {
            lVar11 = FUN_0333d16c(0,1);
            *(long *)(lVar7 + 0x38d490) = lVar11;
          }
          plVar16 = *(long **)(*(long *)(lVar11 + 8) + 0x58);
          *(undefined8 *)(uVar14 - 0x11) = 0;
          (**(code **)(*plVar16 + 0x18))
                    (plVar16,(undefined8 *)(uVar14 - 0x11),(long)*(int *)(uVar14 - 9) + 0x10);
        }
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 < param_5);
  }
  uVar1 = local_5a4;
  local_5b0 = &PTR_LAB_042afed0;
  (*(code *)puVar5)(&local_5b0);
  lVar7 = local_588;
  uVar19 = (ulong)local_588._4_4_;
  local_588 = (ulong)local_588._4_4_ << 0x20;
  if ((-1 < lVar7) && (local_590 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,local_590,(uVar19 & 0x3fffffff) << 7);
  }
  return uVar1;
}


