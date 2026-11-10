/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e3c898; name: FUN_01e3c898
 */


undefined1 * FUN_01e3c898(long param_1,undefined1 *param_2,uint param_3,uint param_4,int param_5)

{
  ulong uVar1;
  ushort uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined1 *puVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  
  if (param_2 == &DAT_cbf29ce484222645) {
    return &DAT_cbf29ce484222645;
  }
  uVar1 = 0x9fead40ebdcf32b3;
  if ((param_4 | 4) != 7) {
    uVar1 = 0xac401f18307eb195;
  }
  if (param_3 != 100) {
    uVar10 = *(ulong *)(param_1 + 0x108);
    if (uVar10 != 0) {
      uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar16 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      uVar12 = (ulong)param_3;
      if (uVar16 < 2) {
        uVar14 = (ulong)((int)uVar10 - 1U & param_3);
      }
      else {
        uVar14 = uVar12;
        if (uVar10 <= uVar12) {
          uVar14 = 0;
          if (uVar10 != 0) {
            uVar14 = uVar12 / uVar10;
          }
          uVar14 = uVar12 - uVar14 * uVar10;
        }
      }
      plVar15 = *(long **)(*(long *)(param_1 + 0x100) + uVar14 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar16 < 2) {
          do {
            if (plVar15[1] == uVar12) {
              if (*(uint *)(plVar15 + 2) == param_3) goto LAB_01e3c97c;
            }
            else if ((plVar15[1] & uVar10 - 1) != uVar14) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar16 = plVar15[1];
            if (uVar16 == uVar12) {
              if (*(uint *)(plVar15 + 2) == param_3) goto LAB_01e3c97c;
            }
            else {
              if (uVar10 <= uVar16) {
                uVar3 = 0;
                if (uVar10 != 0) {
                  uVar3 = uVar16 / uVar10;
                }
                uVar16 = uVar16 - uVar3 * uVar10;
              }
              if (uVar16 != uVar14) break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
    }
    FUN_01e3faf0();
    if (((*PTR_DAT_04381e98 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04381e98), puVar5 = PTR_DAT_04381ea0,
       puVar4 = PTR_DAT_043794d8, iVar6 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar6 != 0)) {
        uVar7 = FUN_0087f8f0();
        *(undefined8 *)puVar4 = uVar7;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)puVar5 = puVar4;
      __cxa_guard_release(PTR_DAT_04381e98);
    }
    return PTR_DAT_04381ea0;
  }
  if ((param_4 | 4) != 7) {
    return &DAT_cbf29ce484222645;
  }
LAB_01e3c988:
  puVar9 = *(undefined1 **)(param_1 + 0xa0);
  if (puVar9 != (undefined1 *)0x0) {
    uVar10 = (long)puVar9 - ((ulong)puVar9 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      puVar11 = (undefined1 *)((ulong)(puVar9 + -1) & (ulong)param_2);
    }
    else {
      puVar11 = param_2;
      if (puVar9 <= param_2) {
        uVar12 = 0;
        if (puVar9 != (undefined1 *)0x0) {
          uVar12 = (ulong)param_2 / (ulong)puVar9;
        }
        puVar11 = param_2 + -(uVar12 * (long)puVar9);
      }
    }
    plVar15 = *(long **)(*(long *)(param_1 + 0x98) + (long)puVar11 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if ((undefined1 *)plVar15[1] == param_2) {
            if ((undefined1 *)plVar15[2] == param_2) goto LAB_01e3ca24;
          }
          else if ((undefined1 *)((ulong)plVar15[1] & (ulong)(puVar9 + -1)) != puVar11) {
            return &DAT_cbf29ce484222645;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          puVar13 = (undefined1 *)plVar15[1];
          if (puVar13 == param_2) {
            if ((undefined1 *)plVar15[2] == param_2) goto LAB_01e3ca24;
          }
          else {
            if (puVar9 <= puVar13) {
              uVar10 = 0;
              if (puVar9 != (undefined1 *)0x0) {
                uVar10 = (ulong)puVar13 / (ulong)puVar9;
              }
              puVar13 = puVar13 + -(uVar10 * (long)puVar9);
            }
            if (puVar13 != puVar11) {
              return &DAT_cbf29ce484222645;
            }
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  return &DAT_cbf29ce484222645;
LAB_01e3c97c:
  if ((undefined1 *)plVar15[3] != param_2) {
    return &DAT_cbf29ce484222645;
  }
  goto LAB_01e3c988;
LAB_01e3ca24:
  uVar10 = plVar15[4];
  if (uVar10 == 0) {
    return &DAT_cbf29ce484222645;
  }
  uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
  uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar12 < 2) {
    uVar16 = uVar10 - 1 & uVar1;
  }
  else {
    uVar16 = uVar1;
    if (uVar10 <= uVar1) {
      uVar16 = 0;
      if (uVar10 != 0) {
        uVar16 = uVar1 / uVar10;
      }
      uVar16 = uVar1 - uVar16 * uVar10;
    }
  }
  plVar15 = *(long **)(plVar15[3] + uVar16 * 8);
  if (plVar15 == (long *)0x0) {
    return &DAT_cbf29ce484222645;
  }
  plVar15 = (long *)*plVar15;
  if (plVar15 == (long *)0x0) {
    return &DAT_cbf29ce484222645;
  }
  if (uVar12 < 2) {
    do {
      if (plVar15[1] == uVar1) {
        if (plVar15[2] == uVar1) goto LAB_01e3cbd0;
      }
      else if ((plVar15[1] & uVar10 - 1) != uVar16) {
        return &DAT_cbf29ce484222645;
      }
      plVar15 = (long *)*plVar15;
      if (plVar15 == (long *)0x0) {
        return &DAT_cbf29ce484222645;
      }
    } while( true );
  }
  do {
    uVar12 = plVar15[1];
    if (uVar12 == uVar1) {
      if (plVar15[2] == uVar1) {
LAB_01e3cbd0:
        piVar8 = (int *)plVar15[3];
        if (param_5 == 1) {
          if (*(ushort *)((long)piVar8 - (long)*piVar8) < 9) {
            return (undefined1 *)0x0;
          }
          uVar2 = ((ushort *)((long)piVar8 - (long)*piVar8))[4];
        }
        else if (param_5 == 2) {
          if (*(ushort *)((long)piVar8 - (long)*piVar8) < 0xb) {
            return (undefined1 *)0x0;
          }
          uVar2 = ((ushort *)((long)piVar8 - (long)*piVar8))[5];
        }
        else if (param_5 == 3) {
          if (*(ushort *)((long)piVar8 - (long)*piVar8) < 0xd) {
            return (undefined1 *)0x0;
          }
          uVar2 = ((ushort *)((long)piVar8 - (long)*piVar8))[6];
        }
        else {
          if (*(ushort *)((long)piVar8 - (long)*piVar8) < 7) {
            return (undefined1 *)0x0;
          }
          uVar2 = ((ushort *)((long)piVar8 - (long)*piVar8))[3];
        }
        if ((ulong)uVar2 == 0) {
          return (undefined1 *)0x0;
        }
        return *(undefined1 **)((long)piVar8 + (ulong)uVar2);
      }
    }
    else {
      if (uVar10 <= uVar12) {
        uVar14 = 0;
        if (uVar10 != 0) {
          uVar14 = uVar12 / uVar10;
        }
        uVar12 = uVar12 - uVar14 * uVar10;
      }
      if (uVar12 != uVar16) {
        return &DAT_cbf29ce484222645;
      }
    }
    plVar15 = (long *)*plVar15;
    if (plVar15 == (long *)0x0) {
      return &DAT_cbf29ce484222645;
    }
  } while( true );
}


