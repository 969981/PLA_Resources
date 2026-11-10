/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0148c09c; name: FUN_0148c09c
 */


void FUN_0148c09c(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = 0;
  lVar6 = param_1;
  do {
    lVar7 = 0;
    do {
      lVar2 = lVar6 + lVar7;
      if (*(char *)(lVar2 + 0x650) == '\0') {
        if (*(char *)(lVar2 + 0x651) != '\0') goto LAB_0148c104;
      }
      else {
        if (*(long *)(param_1 + 0x2c8) != 0) {
          lVar1 = lVar2 + 0x5b0;
          uVar3 = FUN_0283b5c4(*(long *)(param_1 + 0x2c8),lVar1);
          if ((uVar3 & 1) != 0) {
            if (*(long *)(param_1 + 0x2c8) == 0) goto LAB_0148c18c;
            FUN_0283b1e8(*(long *)(param_1 + 0x2c8),lVar1);
          }
          FUN_0283b748(0,*(undefined8 *)(param_1 + 0x2c8),lVar1);
          if (*(long *)(param_1 + 0x2c8) != 0) {
            FUN_0283b1e8(*(long *)(param_1 + 0x2c8),lVar1);
          }
        }
LAB_0148c18c:
        *(undefined1 *)(lVar2 + 0x650) = 0;
        *(undefined1 *)(lVar2 + 0x651) = 1;
LAB_0148c104:
        if ((*(long *)(param_1 + 0x2c8) == 0) ||
           (uVar3 = FUN_0283b5c4(*(long *)(param_1 + 0x2c8),lVar2 + 0x5b0), (uVar3 & 1) != 0)) {
          if (*(code **)(lVar2 + 0x5d0) != (code *)0x0) {
            (**(code **)(lVar2 + 0x5d0))(lVar2 + 0x5f0);
          }
LAB_0148c1a8:
          iVar4 = *(int *)(lVar2 + 0x654);
LAB_0148c1ac:
          *(undefined1 *)(lVar2 + 0x651) = 0;
          *(int *)(lVar2 + 0x658) = iVar4;
        }
        else {
          iVar4 = *(int *)(lVar2 + 0x654);
          if (0 < iVar4) {
            if (*(int *)(lVar2 + 0x658) < 1) {
              if (*(code **)(lVar2 + 0x5d0) != (code *)0x0) {
                (**(code **)(lVar2 + 0x5d0))(lVar2 + 0x5f0);
                goto LAB_0148c1a8;
              }
              goto LAB_0148c1ac;
            }
            *(int *)(lVar2 + 0x658) = *(int *)(lVar2 + 0x658) + -1;
          }
        }
      }
      lVar7 = lVar7 + 0xb0;
    } while (lVar7 != 0x370);
    lVar5 = lVar5 + 1;
    lVar6 = lVar6 + 0x370;
    if (lVar5 == 10) {
      return;
    }
  } while( true );
}


