/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0147bea0; name: FUN_0147bea0
 */


void FUN_0147bea0(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  if ((*(long *)(param_1 + 0x5f8) != 0) && (uVar4 = *(ulong *)(param_1 + 0x668), uVar4 < 3)) {
    if ((uVar4 != 0) && (lVar2 = *(long *)(param_1 + 0x628), *(long *)(param_1 + 0x630) != lVar2)) {
      uVar5 = *(ulong *)(param_1 + 0x660);
      lVar3 = *(long *)(lVar2 + (uVar5 / 0x2e) * 8) + (uVar5 % 0x2e) * 0x58;
      lVar6 = *(long *)(lVar2 + ((uVar5 + uVar4) / 0x2e) * 8) + ((uVar5 + uVar4) % 0x2e) * 0x58;
      if (lVar6 != lVar3) {
        plVar8 = (long *)(lVar2 + (uVar5 / 0x2e) * 8);
        do {
          while( true ) {
            iVar1 = *(int *)(lVar3 + 0x1c);
            plVar7 = *(long **)(lVar3 + 0x38);
            if (plVar7 != (long *)0x0) {
              (**(code **)(*plVar7 + 0x18))(plVar7);
              (**(code **)(*plVar7 + 0x20))(plVar7);
            }
            if (iVar1 == 1) goto LAB_0147bec8;
            lVar3 = lVar3 + 0x58;
            if (lVar3 - *plVar8 == 0xfd0) break;
            if (lVar6 == lVar3) goto LAB_0147bfd4;
          }
          plVar8 = plVar8 + 1;
          lVar3 = *plVar8;
        } while (lVar6 != lVar3);
      }
    }
LAB_0147bfd4:
    if (*(char *)(param_1 + 0x690) == '\0') {
      FUN_0147bdc0(param_1);
      FUN_0147b82c(param_1);
      uVar4 = (*(long *)(param_1 + 0x5f8) + *(long *)(param_1 + 0x5f0)) - 1;
      FUN_0147c2c4(param_1 + 0x620,
                   *(long *)(*(long *)(param_1 + 0x5b8) + (uVar4 / 0x2e) * 8) +
                   (uVar4 % 0x2e) * 0x58);
      FUN_0147daf8(param_1 + 0x5b0);
      uVar4 = (*(long *)(param_1 + 0x668) + *(long *)(param_1 + 0x660)) - 1;
      FUN_0147c390(param_1,*(long *)(*(long *)(param_1 + 0x628) + (uVar4 / 0x2e) * 8) +
                           (uVar4 % 0x2e) * 0x58);
      lVar2 = *(long *)(param_1 + 0x668);
      goto joined_r0x0147c07c;
    }
  }
LAB_0147bec8:
  lVar2 = *(long *)(param_1 + 0x668);
joined_r0x0147c07c:
  if (lVar2 != 0) {
    uVar4 = *(ulong *)(param_1 + 0x660);
    lVar3 = *(long *)(param_1 + 0x628);
    lVar6 = *(long *)(param_1 + 0x630);
    plVar8 = (long *)(lVar3 + (uVar4 / 0x2e) * 8);
    if (lVar6 == lVar3) {
      puVar9 = (undefined1 *)0x0;
    }
    else {
      puVar9 = (undefined1 *)(*plVar8 + (uVar4 % 0x2e) * 0x58);
    }
LAB_0147c0dc:
    if (lVar6 == lVar3) goto LAB_0147c2a8;
LAB_0147c0e4:
    if (puVar9 != (undefined1 *)
                  (*(long *)(lVar3 + ((lVar2 + uVar4) / 0x2e) * 8) + ((lVar2 + uVar4) % 0x2e) * 0x58
                  )) {
      do {
        auVar11._8_8_ = puVar9;
        auVar11._0_8_ = plVar8;
        iVar1 = *(int *)(puVar9 + 0x1c);
        if (iVar1 == 2) {
          if (puVar9[0x48] == '\0') {
            if (*(int *)(puVar9 + 0x10) < 1) {
              if (puVar9[0x49] == '\0') goto LAB_0147c250;
            }
            else {
              *(int *)(puVar9 + 0x10) = *(int *)(puVar9 + 0x10) + -1;
            }
            goto LAB_0147c12c;
          }
LAB_0147c250:
          FUN_0147ca80(param_1,puVar9);
          lVar2 = *(long *)(param_1 + 0x668);
joined_r0x0147c230:
        }
        else {
          if (iVar1 == 1) {
            if (((**(char **)(puVar9 + 0x28) == '\0') || (*(long *)(param_1 + 0x2c8) == 0)) ||
               (uVar4 = FUN_0283b5c4(*(long *)(param_1 + 0x2c8),puVar9 + 0x20), (uVar4 & 1) != 0)) {
              *(undefined4 *)(puVar9 + 0x1c) = 2;
              lVar2 = *(long *)(param_1 + 0x668);
              goto joined_r0x0147c230;
            }
            if (puVar9[0x48] != '\0') goto LAB_0147c250;
          }
          else if ((iVar1 == 3) &&
                  (((**(char **)(puVar9 + 0x28) == '\0' || (*(long *)(param_1 + 0x2c8) == 0)) ||
                   (uVar4 = FUN_0283b5c4(*(long *)(param_1 + 0x2c8),puVar9 + 0x20), (uVar4 & 1) != 0
                   )))) {
            if (0 < *(int *)(puVar9 + 0x14)) {
              if (*(int *)(puVar9 + 0x14) < *(int *)(puVar9 + 0x10)) {
                *(undefined1 *)(param_1 + 0x6a0) = *puVar9;
                *(undefined1 *)(param_1 + 0x6b8) = 1;
                *(undefined4 *)(param_1 + 0x6bc) = *(undefined4 *)(puVar9 + 0x10);
                *(undefined4 *)(param_1 + 0x6c0) = *(undefined4 *)(puVar9 + 0x14);
                *(undefined8 *)(param_1 + 0x6b0) = *(undefined8 *)(puVar9 + 0x50);
              }
              else {
                FUN_0147bdc0(param_1);
              }
            }
            *(byte *)(*(long *)(puVar9 + 0x40) + 0x58) =
                 *(byte *)(*(long *)(puVar9 + 0x40) + 0x58) & 0xfe;
            auVar11 = FUN_0147cbf0(param_1 + 0x620,plVar8,puVar9);
            lVar2 = *(long *)(param_1 + 0x668);
            goto joined_r0x0147c218;
          }
LAB_0147c12c:
          lVar2 = *(long *)(param_1 + 0x668);
        }
joined_r0x0147c218:
        if (lVar2 == 0) {
          return;
        }
        lVar10 = auVar11._8_8_;
        plVar8 = auVar11._0_8_;
        lVar3 = *(long *)(param_1 + 0x628);
        lVar6 = *(long *)(param_1 + 0x630);
        uVar4 = *(ulong *)(param_1 + 0x660);
        if (lVar6 == lVar3) {
          if (lVar10 == 0) {
            return;
          }
        }
        else if (lVar10 == *(long *)(lVar3 + ((uVar4 + lVar2) / 0x2e) * 8) +
                           ((uVar4 + lVar2) % 0x2e) * 0x58) {
          return;
        }
        puVar9 = (undefined1 *)(lVar10 + 0x58);
        if ((long)puVar9 - *plVar8 != 0xfd0) goto LAB_0147c0dc;
        plVar8 = plVar8 + 1;
        puVar9 = (undefined1 *)*plVar8;
        if (lVar6 != lVar3) goto LAB_0147c0e4;
LAB_0147c2a8:
        if (puVar9 == (undefined1 *)0x0) {
          return;
        }
      } while( true );
    }
  }
  return;
}


