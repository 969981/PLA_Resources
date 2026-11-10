/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00838bc0; name: FUN_00838bc0
 */


uint FUN_00838bc0(long param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  ushort uVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  char local_74 [4];
  undefined4 local_70 [2];
  long local_68;
  
  puVar4 = PTR_DAT_04377550;
  puVar3 = PTR_DAT_043773c0;
  lVar13 = *(long *)(param_1 + 0x140);
  if (lVar13 != param_1 + 0x138) {
    uVar10 = *(undefined8 *)PTR_DAT_04377ce8;
    uVar12 = 0;
    bVar5 = false;
    lVar6 = *(long *)(param_1 + 0x130);
    do {
      if (lVar6 != 0) {
        FUN_0083eb68(lVar6,lVar13 + 0x20);
      }
      lVar6 = *(long *)(lVar13 + 0x48);
      if (lVar6 == 0) {
        lVar6 = *(long *)puVar4;
        uVar14 = FUN_007e5f0c(*(undefined8 *)(param_1 + 0xc0));
        if (((uVar14 & 1) != 0) &&
           (lVar11 = *(long *)(lVar13 + 0x10), lVar6 = FUN_0083fd98(lVar6 + 0x1b8), lVar11 == lVar6)
           ) goto LAB_00838f58;
        plVar7 = *(long **)(*(long *)puVar4 + 0x18);
        uVar14 = (**(code **)(*plVar7 + 0x120))(plVar7,lVar13 + 0x20);
        if ((uVar14 & 1) == 0) {
          uVar12 = 1;
          goto LAB_00838c34;
        }
        local_74[0] = '\0';
        lVar6 = FUN_008372b8(param_1,*(undefined8 *)(lVar13 + 0x10),*(undefined2 *)(lVar13 + 0x18),
                             *(undefined1 *)(lVar13 + 0x1a),*(undefined1 *)(lVar13 + 0x1b),
                             lVar13 + 0x20,0,1,local_74);
        if (lVar6 == 0) {
          return 0;
        }
        FUN_00825c28(lVar6,lVar13 + 0x50);
        *(undefined4 *)(lVar6 + 0x3c) = 2;
        uVar9 = *(ushort *)(lVar13 + 0x1c);
        *(ushort *)(lVar6 + 0xf8) = uVar9;
        *(undefined1 *)(lVar6 + 0x360) = 0;
        if (*(char *)(lVar13 + 0x70) != '\0') {
          uVar14 = 0;
          lVar11 = lVar13 + 0x78;
          do {
            FUN_00825d80(lVar6,lVar11);
            uVar14 = uVar14 + 1;
            lVar11 = lVar11 + 0x98;
          } while (uVar14 < *(byte *)(lVar13 + 0x70));
          uVar9 = *(ushort *)(lVar13 + 0x1c);
        }
        *(undefined1 *)(lVar6 + 0x361) = *(undefined1 *)(lVar13 + 0x71);
        if (*(ushort *)(param_1 + 0x790) <= uVar9) {
          *(ushort *)(param_1 + 0x790) = uVar9 + 1;
        }
        uVar8 = FUN_00855004(*(undefined8 *)puVar3);
        FUN_00827a20(uVar8,lVar6,lVar13 + 0x40,*(undefined1 *)(lVar13 + 0x42));
        if ((ushort)*(byte *)(lVar13 + 0x42) < *(ushort *)(*(long *)puVar3 + 0x50)) {
          *(undefined1 *)(*(long *)(param_1 + 0x788) + (ulong)*(byte *)(lVar13 + 0x42)) = 1;
        }
        FUN_00854f64();
        uVar14 = FUN_00839e9c(param_1 + 0x860,*(undefined8 *)(lVar6 + 0x30),
                              *(undefined2 *)(lVar6 + 0x38));
        if ((uVar14 & 1) == 0) {
          if (*(code **)(param_1 + 0x778) != (code *)0x0) {
            local_70[0] = 0;
            local_68 = lVar6;
            (**(code **)(param_1 + 0x778))(local_70);
          }
        }
        else {
          iVar2 = *(int *)(param_1 + 0x850);
          if (iVar2 < 0x17) {
            if (0 < iVar2) {
              plVar7 = (long *)(param_1 + 0x798);
              lVar11 = (long)iVar2;
              do {
                if (*plVar7 == *(long *)(lVar6 + 0x30)) goto LAB_00838e8c;
                lVar11 = lVar11 + -1;
                plVar7 = plVar7 + 1;
              } while (lVar11 != 0);
            }
            *(long *)(param_1 + (long)iVar2 * 8 + 0x798) = *(long *)(lVar6 + 0x30);
            *(int *)(param_1 + 0x850) = iVar2 + 1;
          }
LAB_00838e8c:
          FUN_008359ac(param_1);
        }
        *(undefined1 *)(param_1 + 0x792) = 1;
        bVar5 = local_74[0] != '\0' || bVar5;
LAB_00838f3c:
        FUN_0082f888(uVar10,lVar6,lVar13 + 0x40);
        lVar13 = *(long *)(lVar13 + 8);
      }
      else if (*(char *)(lVar6 + 0x78) == '\0') {
        FUN_00825c28(lVar6,lVar13 + 0x50);
        *(undefined4 *)(lVar6 + 0x3c) = 2;
        uVar9 = *(ushort *)(lVar13 + 0x1c);
        *(ushort *)(lVar6 + 0xf8) = uVar9;
        *(undefined1 *)(lVar6 + 0x360) = 0;
        if (*(char *)(lVar13 + 0x70) != '\0') {
          uVar14 = 0;
          lVar11 = lVar13 + 0x78;
          do {
            FUN_00825d80(lVar6,lVar11);
            uVar14 = uVar14 + 1;
            lVar11 = lVar11 + 0x98;
          } while (uVar14 < *(byte *)(lVar13 + 0x70));
          uVar9 = *(ushort *)(lVar13 + 0x1c);
        }
        *(undefined1 *)(lVar6 + 0x361) = *(undefined1 *)(lVar13 + 0x71);
        if (*(ushort *)(param_1 + 0x790) <= uVar9) {
          *(ushort *)(param_1 + 0x790) = uVar9 + 1;
        }
        if ((*(char *)(lVar6 + 0x90) != *(char *)(lVar13 + 0x40)) ||
           (*(char *)(lVar6 + 0x91) != *(char *)(lVar13 + 0x41))) {
          bVar1 = *(byte *)(lVar6 + 0x28);
          if ((bVar1 != 0xfd) && ((ushort)bVar1 < *(ushort *)(*(long *)puVar3 + 0x50))) {
            *(undefined1 *)(*(long *)(param_1 + 0x788) + (ulong)bVar1) = 0;
          }
          FUN_0082f00c(uVar10,lVar6);
          uVar8 = FUN_00855004(*(undefined8 *)puVar3);
          FUN_00827a20(uVar8,lVar6,(char *)(lVar13 + 0x40),*(undefined1 *)(lVar13 + 0x42));
          if ((ushort)*(byte *)(lVar13 + 0x42) < *(ushort *)(*(long *)puVar3 + 0x50)) {
            *(undefined1 *)(*(long *)(param_1 + 0x788) + (ulong)*(byte *)(lVar13 + 0x42)) = 1;
          }
          FUN_00854f64();
          goto LAB_00838f3c;
        }
        FUN_00854f64(*(undefined8 *)puVar3);
        lVar13 = *(long *)(lVar13 + 8);
      }
      else {
LAB_00838c34:
        lVar13 = *(long *)(lVar13 + 8);
      }
      if (lVar13 == param_1 + 0x138) goto LAB_00838f58;
      lVar6 = *(long *)(param_1 + 0x130);
    } while( true );
  }
  uVar12 = 0;
LAB_00838f70:
  return uVar12 ^ 1;
LAB_00838f58:
  if ((*(long *)(param_1 + 0x130) != 0) && (bVar5)) {
    FUN_0083e2d4();
  }
  goto LAB_00838f70;
}


