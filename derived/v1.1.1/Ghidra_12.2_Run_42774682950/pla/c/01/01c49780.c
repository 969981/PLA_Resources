/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c49780; name: FUN_01c49780
 */


undefined4 FUN_01c49780(int param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined4 uVar13;
  
  if (param_1 != 0) {
    if (param_1 != 1) {
      if (param_1 != 2) {
        return 0;
      }
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379660), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar10 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar10;
      uVar7 = *(ulong *)(lVar10 + 0x60);
      if (uVar7 == 0) {
        return 0;
      }
      uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
      uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
      uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar8 < 2) {
        uVar9 = uVar7 - 1 & 0x5c0c635117f72945;
      }
      else if (uVar7 < 0x5c0c635117f72946) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = 0x5c0c635117f72945 / uVar7;
        }
        uVar9 = 0x5c0c635117f72945 - uVar9 * uVar7;
      }
      else {
        uVar9 = 0x5c0c635117f72945;
      }
      plVar11 = *(long **)(*(long *)(lVar10 + 0x58) + uVar9 * 8);
      if (plVar11 == (long *)0x0) {
        return 0;
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        return 0;
      }
      if (uVar8 < 2) {
        do {
          if (plVar11[1] == 0x5c0c635117f72945) {
            if (plVar11[2] == 0x5c0c635117f72945) goto LAB_01c4a154;
          }
          else if ((plVar11[1] & uVar7 - 1) != uVar9) {
            return 0;
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
      do {
        uVar8 = plVar11[1];
        if (uVar8 == 0x5c0c635117f72945) {
          if (plVar11[2] == 0x5c0c635117f72945) goto LAB_01c4a154;
        }
        else {
          if (uVar7 <= uVar8) {
            uVar4 = 0;
            if (uVar7 != 0) {
              uVar4 = uVar8 / uVar7;
            }
            uVar8 = uVar8 - uVar4 * uVar7;
          }
          if (uVar8 != uVar9) {
            return 0;
          }
        }
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) {
          return 0;
        }
      } while( true );
    }
    if (param_2 != 1) {
      switch(param_2) {
      case 2:
        goto switchD_01c49afc_caseD_2;
      case 3:
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379660), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar10 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar10;
        uVar7 = *(ulong *)(lVar10 + 0x60);
        if (uVar7 == 0) {
          return 0;
        }
        uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
        uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
        uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar8 < 2) {
          uVar9 = uVar7 - 1 & 0x5c0c635117f72945;
        }
        else if (uVar7 < 0x5c0c635117f72946) {
          uVar9 = 0;
          if (uVar7 != 0) {
            uVar9 = 0x5c0c635117f72945 / uVar7;
          }
          uVar9 = 0x5c0c635117f72945 - uVar9 * uVar7;
        }
        else {
          uVar9 = 0x5c0c635117f72945;
        }
        plVar11 = *(long **)(*(long *)(lVar10 + 0x58) + uVar9 * 8);
        if (plVar11 == (long *)0x0) {
          return 0;
        }
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) {
          return 0;
        }
        if (uVar8 < 2) {
          do {
            if (plVar11[1] == 0x5c0c635117f72945) {
              if (plVar11[2] == 0x5c0c635117f72945) goto LAB_01c49f34;
            }
            else if ((plVar11[1] & uVar7 - 1) != uVar9) {
              return 0;
            }
            plVar11 = (long *)*plVar11;
            if (plVar11 == (long *)0x0) {
              return 0;
            }
          } while( true );
        }
        do {
          uVar8 = plVar11[1];
          if (uVar8 == 0x5c0c635117f72945) {
            if (plVar11[2] == 0x5c0c635117f72945) goto LAB_01c49f34;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar4 * uVar7;
            }
            if (uVar8 != uVar9) {
              return 0;
            }
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) {
            return 0;
          }
        } while( true );
      case 4:
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379660), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar10 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar10;
        uVar7 = *(ulong *)(lVar10 + 0x60);
        if (uVar7 == 0) {
          return 0;
        }
        uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
        uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
        uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar8 < 2) {
          uVar9 = uVar7 - 1 & 0x5c0c635117f72945;
        }
        else if (uVar7 < 0x5c0c635117f72946) {
          uVar9 = 0;
          if (uVar7 != 0) {
            uVar9 = 0x5c0c635117f72945 / uVar7;
          }
          uVar9 = 0x5c0c635117f72945 - uVar9 * uVar7;
        }
        else {
          uVar9 = 0x5c0c635117f72945;
        }
        plVar11 = *(long **)(*(long *)(lVar10 + 0x58) + uVar9 * 8);
        if (plVar11 == (long *)0x0) {
          return 0;
        }
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) {
          return 0;
        }
        if (uVar8 < 2) {
          do {
            if (plVar11[1] == 0x5c0c635117f72945) {
              if (plVar11[2] == 0x5c0c635117f72945) goto LAB_01c4b2fc;
            }
            else if ((plVar11[1] & uVar7 - 1) != uVar9) {
              return 0;
            }
            plVar11 = (long *)*plVar11;
            if (plVar11 == (long *)0x0) {
              return 0;
            }
          } while( true );
        }
        do {
          uVar8 = plVar11[1];
          if (uVar8 == 0x5c0c635117f72945) {
            if (plVar11[2] == 0x5c0c635117f72945) goto LAB_01c4b2fc;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar4 * uVar7;
            }
            if (uVar8 != uVar9) {
              return 0;
            }
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) {
            return 0;
          }
        } while( true );
      case 5:
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379660), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar10 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar10;
        uVar7 = *(ulong *)(lVar10 + 0x60);
        if (uVar7 == 0) {
          return 0;
        }
        uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
        uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
        uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar8 < 2) {
          uVar9 = uVar7 - 1 & 0x5c0c635117f72945;
        }
        else if (uVar7 < 0x5c0c635117f72946) {
          uVar9 = 0;
          if (uVar7 != 0) {
            uVar9 = 0x5c0c635117f72945 / uVar7;
          }
          uVar9 = 0x5c0c635117f72945 - uVar9 * uVar7;
        }
        else {
          uVar9 = 0x5c0c635117f72945;
        }
        plVar11 = *(long **)(*(long *)(lVar10 + 0x58) + uVar9 * 8);
        if (plVar11 == (long *)0x0) {
          return 0;
        }
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) {
          return 0;
        }
        if (uVar8 < 2) {
          do {
            if (plVar11[1] == 0x5c0c635117f72945) {
              if (plVar11[2] == 0x5c0c635117f72945) goto LAB_01c4b958;
            }
            else if ((plVar11[1] & uVar7 - 1) != uVar9) {
              return 0;
            }
            plVar11 = (long *)*plVar11;
            if (plVar11 == (long *)0x0) {
              return 0;
            }
          } while( true );
        }
        do {
          uVar8 = plVar11[1];
          if (uVar8 == 0x5c0c635117f72945) {
            if (plVar11[2] == 0x5c0c635117f72945) goto LAB_01c4b958;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar4 * uVar7;
            }
            if (uVar8 != uVar9) {
              return 0;
            }
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) {
            return 0;
          }
        } while( true );
      case 6:
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379660), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar10 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar10;
        uVar7 = *(ulong *)(lVar10 + 0x60);
        if (uVar7 == 0) {
          return 0;
        }
        uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
        uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
        uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar8 < 2) {
          uVar9 = uVar7 - 1 & 0x5c0c635117f72945;
        }
        else if (uVar7 < 0x5c0c635117f72946) {
          uVar9 = 0;
          if (uVar7 != 0) {
            uVar9 = 0x5c0c635117f72945 / uVar7;
          }
          uVar9 = 0x5c0c635117f72945 - uVar9 * uVar7;
        }
        else {
          uVar9 = 0x5c0c635117f72945;
        }
        plVar11 = *(long **)(*(long *)(lVar10 + 0x58) + uVar9 * 8);
        if (plVar11 == (long *)0x0) {
          return 0;
        }
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) {
          return 0;
        }
        if (uVar8 < 2) {
          do {
            if (plVar11[1] == 0x5c0c635117f72945) {
              if (plVar11[2] == 0x5c0c635117f72945) goto LAB_01c4aba8;
            }
            else if ((plVar11[1] & uVar7 - 1) != uVar9) {
              return 0;
            }
            plVar11 = (long *)*plVar11;
            if (plVar11 == (long *)0x0) {
              return 0;
            }
          } while( true );
        }
        do {
          uVar8 = plVar11[1];
          if (uVar8 == 0x5c0c635117f72945) {
            if (plVar11[2] == 0x5c0c635117f72945) goto LAB_01c4aba8;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar4 * uVar7;
            }
            if (uVar8 != uVar9) {
              return 0;
            }
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) {
            return 0;
          }
        } while( true );
      case 7:
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379660), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar10 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar10;
        uVar7 = *(ulong *)(lVar10 + 0x60);
        if (uVar7 == 0) {
          return 0;
        }
        uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
        uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
        uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar8 < 2) {
          uVar9 = uVar7 - 1 & 0x5c0c635117f72945;
        }
        else if (uVar7 < 0x5c0c635117f72946) {
          uVar9 = 0;
          if (uVar7 != 0) {
            uVar9 = 0x5c0c635117f72945 / uVar7;
          }
          uVar9 = 0x5c0c635117f72945 - uVar9 * uVar7;
        }
        else {
          uVar9 = 0x5c0c635117f72945;
        }
        plVar11 = *(long **)(*(long *)(lVar10 + 0x58) + uVar9 * 8);
        if (plVar11 == (long *)0x0) {
          return 0;
        }
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) {
          return 0;
        }
        if (uVar8 < 2) {
          do {
            if (plVar11[1] == 0x5c0c635117f72945) {
              if (plVar11[2] == 0x5c0c635117f72945) goto LAB_01c4aa10;
            }
            else if ((plVar11[1] & uVar7 - 1) != uVar9) {
              return 0;
            }
            plVar11 = (long *)*plVar11;
            if (plVar11 == (long *)0x0) {
              return 0;
            }
          } while( true );
        }
        do {
          uVar8 = plVar11[1];
          if (uVar8 == 0x5c0c635117f72945) {
            if (plVar11[2] == 0x5c0c635117f72945) goto LAB_01c4aa10;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar4 * uVar7;
            }
            if (uVar8 != uVar9) {
              return 0;
            }
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) {
            return 0;
          }
        } while( true );
      case 8:
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379660), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar10 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar10;
        uVar7 = *(ulong *)(lVar10 + 0x60);
        if (uVar7 == 0) {
          return 0;
        }
        uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
        uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
        uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar8 < 2) {
          uVar9 = uVar7 - 1 & 0x5c0c635117f72945;
        }
        else if (uVar7 < 0x5c0c635117f72946) {
          uVar9 = 0;
          if (uVar7 != 0) {
            uVar9 = 0x5c0c635117f72945 / uVar7;
          }
          uVar9 = 0x5c0c635117f72945 - uVar9 * uVar7;
        }
        else {
          uVar9 = 0x5c0c635117f72945;
        }
        plVar11 = *(long **)(*(long *)(lVar10 + 0x58) + uVar9 * 8);
        if (plVar11 == (long *)0x0) {
          return 0;
        }
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) {
          return 0;
        }
        if (uVar8 < 2) {
          do {
            if (plVar11[1] == 0x5c0c635117f72945) {
              if (plVar11[2] == 0x5c0c635117f72945) goto LAB_01c4a698;
            }
            else if ((plVar11[1] & uVar7 - 1) != uVar9) {
              return 0;
            }
            plVar11 = (long *)*plVar11;
            if (plVar11 == (long *)0x0) {
              return 0;
            }
          } while( true );
        }
        do {
          uVar8 = plVar11[1];
          if (uVar8 == 0x5c0c635117f72945) {
            if (plVar11[2] == 0x5c0c635117f72945) goto LAB_01c4a698;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar4 * uVar7;
            }
            if (uVar8 != uVar9) {
              return 0;
            }
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) {
            return 0;
          }
        } while( true );
      default:
        return 0;
      }
    }
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379660), iVar6 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar10 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar10;
    uVar7 = *(ulong *)(lVar10 + 0x60);
    if (uVar7 == 0) {
      return 0;
    }
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & 0x5c0c635117f72945;
    }
    else if (uVar7 < 0x5c0c635117f72946) {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = 0x5c0c635117f72945 / uVar7;
      }
      uVar9 = 0x5c0c635117f72945 - uVar9 * uVar7;
    }
    else {
      uVar9 = 0x5c0c635117f72945;
    }
    plVar11 = *(long **)(*(long *)(lVar10 + 0x58) + uVar9 * 8);
    if (plVar11 == (long *)0x0) {
      return 0;
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      return 0;
    }
    if (uVar8 < 2) {
      do {
        if (plVar11[1] == 0x5c0c635117f72945) {
          if (plVar11[2] == 0x5c0c635117f72945) goto LAB_01c49a00;
        }
        else if ((plVar11[1] & uVar7 - 1) != uVar9) {
          return 0;
        }
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) {
          return 0;
        }
      } while( true );
    }
    do {
      uVar8 = plVar11[1];
      if (uVar8 == 0x5c0c635117f72945) {
        if (plVar11[2] == 0x5c0c635117f72945) goto LAB_01c49a00;
      }
      else {
        if (uVar7 <= uVar8) {
          uVar4 = 0;
          if (uVar7 != 0) {
            uVar4 = uVar8 / uVar7;
          }
          uVar8 = uVar8 - uVar4 * uVar7;
        }
        if (uVar8 != uVar9) {
          return 0;
        }
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        return 0;
      }
    } while( true );
  }
  if (param_2 != 1) {
    switch(param_2) {
    case 2:
      goto switchD_01c49cdc_caseD_2;
    case 3:
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379660), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar10 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar10;
      uVar7 = *(ulong *)(lVar10 + 0x60);
      if (uVar7 == 0) {
        return 0;
      }
      uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
      uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
      uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar8 < 2) {
        uVar9 = uVar7 - 1 & 0x5c0c635117f72945;
      }
      else if (uVar7 < 0x5c0c635117f72946) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = 0x5c0c635117f72945 / uVar7;
        }
        uVar9 = 0x5c0c635117f72945 - uVar9 * uVar7;
      }
      else {
        uVar9 = 0x5c0c635117f72945;
      }
      plVar11 = *(long **)(*(long *)(lVar10 + 0x58) + uVar9 * 8);
      if (plVar11 == (long *)0x0) {
        return 0;
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        return 0;
      }
      if (uVar8 < 2) {
        do {
          if (plVar11[1] == 0x5c0c635117f72945) {
            if (plVar11[2] == 0x5c0c635117f72945) goto LAB_01c4a500;
          }
          else if ((plVar11[1] & uVar7 - 1) != uVar9) {
            return 0;
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
      do {
        uVar8 = plVar11[1];
        if (uVar8 == 0x5c0c635117f72945) {
          if (plVar11[2] == 0x5c0c635117f72945) goto LAB_01c4a500;
        }
        else {
          if (uVar7 <= uVar8) {
            uVar4 = 0;
            if (uVar7 != 0) {
              uVar4 = uVar8 / uVar7;
            }
            uVar8 = uVar8 - uVar4 * uVar7;
          }
          if (uVar8 != uVar9) {
            return 0;
          }
        }
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) {
          return 0;
        }
      } while( true );
    case 4:
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379660), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar10 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar10;
      uVar7 = *(ulong *)(lVar10 + 0x60);
      if (uVar7 == 0) {
        return 0;
      }
      uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
      uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
      uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar8 < 2) {
        uVar9 = uVar7 - 1 & 0x5c0c635117f72945;
      }
      else if (uVar7 < 0x5c0c635117f72946) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = 0x5c0c635117f72945 / uVar7;
        }
        uVar9 = 0x5c0c635117f72945 - uVar9 * uVar7;
      }
      else {
        uVar9 = 0x5c0c635117f72945;
      }
      plVar11 = *(long **)(*(long *)(lVar10 + 0x58) + uVar9 * 8);
      if (plVar11 == (long *)0x0) {
        return 0;
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        return 0;
      }
      if (uVar8 < 2) {
        do {
          if (plVar11[1] == 0x5c0c635117f72945) {
            if (plVar11[2] == 0x5c0c635117f72945) goto LAB_01c4a368;
          }
          else if ((plVar11[1] & uVar7 - 1) != uVar9) {
            return 0;
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
      do {
        uVar8 = plVar11[1];
        if (uVar8 == 0x5c0c635117f72945) {
          if (plVar11[2] == 0x5c0c635117f72945) goto LAB_01c4a368;
        }
        else {
          if (uVar7 <= uVar8) {
            uVar4 = 0;
            if (uVar7 != 0) {
              uVar4 = uVar8 / uVar7;
            }
            uVar8 = uVar8 - uVar4 * uVar7;
          }
          if (uVar8 != uVar9) {
            return 0;
          }
        }
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) {
          return 0;
        }
      } while( true );
    case 5:
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379660), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar10 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar10;
      uVar7 = *(ulong *)(lVar10 + 0x60);
      if (uVar7 == 0) {
        return 0;
      }
      uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
      uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
      uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar8 < 2) {
        uVar9 = uVar7 - 1 & 0x5c0c635117f72945;
      }
      else if (uVar7 < 0x5c0c635117f72946) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = 0x5c0c635117f72945 / uVar7;
        }
        uVar9 = 0x5c0c635117f72945 - uVar9 * uVar7;
      }
      else {
        uVar9 = 0x5c0c635117f72945;
      }
      plVar11 = *(long **)(*(long *)(lVar10 + 0x58) + uVar9 * 8);
      if (plVar11 == (long *)0x0) {
        return 0;
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        return 0;
      }
      if (uVar8 < 2) {
        do {
          if (plVar11[1] == 0x5c0c635117f72945) {
            if (plVar11[2] == 0x5c0c635117f72945) goto LAB_01c4adc0;
          }
          else if ((plVar11[1] & uVar7 - 1) != uVar9) {
            return 0;
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
      do {
        uVar8 = plVar11[1];
        if (uVar8 == 0x5c0c635117f72945) {
          if (plVar11[2] == 0x5c0c635117f72945) goto LAB_01c4adc0;
        }
        else {
          if (uVar7 <= uVar8) {
            uVar4 = 0;
            if (uVar7 != 0) {
              uVar4 = uVar8 / uVar7;
            }
            uVar8 = uVar8 - uVar4 * uVar7;
          }
          if (uVar8 != uVar9) {
            return 0;
          }
        }
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) {
          return 0;
        }
      } while( true );
    case 6:
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379660), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar10 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar10;
      uVar7 = *(ulong *)(lVar10 + 0x60);
      if (uVar7 == 0) {
        return 0;
      }
      uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
      uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
      uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar8 < 2) {
        uVar9 = uVar7 - 1 & 0x5c0c635117f72945;
      }
      else if (uVar7 < 0x5c0c635117f72946) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = 0x5c0c635117f72945 / uVar7;
        }
        uVar9 = 0x5c0c635117f72945 - uVar9 * uVar7;
      }
      else {
        uVar9 = 0x5c0c635117f72945;
      }
      plVar11 = *(long **)(*(long *)(lVar10 + 0x58) + uVar9 * 8);
      if (plVar11 == (long *)0x0) {
        return 0;
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        return 0;
      }
      if (uVar8 < 2) {
        do {
          if (plVar11[1] == 0x5c0c635117f72945) {
            if (plVar11[2] == 0x5c0c635117f72945) goto LAB_01c4b7c0;
          }
          else if ((plVar11[1] & uVar7 - 1) != uVar9) {
            return 0;
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
      do {
        uVar8 = plVar11[1];
        if (uVar8 == 0x5c0c635117f72945) {
          if (plVar11[2] == 0x5c0c635117f72945) goto LAB_01c4b7c0;
        }
        else {
          if (uVar7 <= uVar8) {
            uVar4 = 0;
            if (uVar7 != 0) {
              uVar4 = uVar8 / uVar7;
            }
            uVar8 = uVar8 - uVar4 * uVar7;
          }
          if (uVar8 != uVar9) {
            return 0;
          }
        }
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) {
          return 0;
        }
      } while( true );
    case 7:
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379660), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar10 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar10;
      uVar7 = *(ulong *)(lVar10 + 0x60);
      if (uVar7 == 0) {
        return 0;
      }
      uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
      uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
      uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar8 < 2) {
        uVar9 = uVar7 - 1 & 0x5c0c635117f72945;
      }
      else if (uVar7 < 0x5c0c635117f72946) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = 0x5c0c635117f72945 / uVar7;
        }
        uVar9 = 0x5c0c635117f72945 - uVar9 * uVar7;
      }
      else {
        uVar9 = 0x5c0c635117f72945;
      }
      plVar11 = *(long **)(*(long *)(lVar10 + 0x58) + uVar9 * 8);
      if (plVar11 == (long *)0x0) {
        return 0;
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        return 0;
      }
      if (uVar8 < 2) {
        do {
          if (plVar11[1] == 0x5c0c635117f72945) {
            if (plVar11[2] == 0x5c0c635117f72945) goto LAB_01c4b628;
          }
          else if ((plVar11[1] & uVar7 - 1) != uVar9) {
            return 0;
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
      do {
        uVar8 = plVar11[1];
        if (uVar8 == 0x5c0c635117f72945) {
          if (plVar11[2] == 0x5c0c635117f72945) goto LAB_01c4b628;
        }
        else {
          if (uVar7 <= uVar8) {
            uVar4 = 0;
            if (uVar7 != 0) {
              uVar4 = uVar8 / uVar7;
            }
            uVar8 = uVar8 - uVar4 * uVar7;
          }
          if (uVar8 != uVar9) {
            return 0;
          }
        }
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) {
          return 0;
        }
      } while( true );
    case 8:
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379660), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar10 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar10;
      uVar7 = *(ulong *)(lVar10 + 0x60);
      if (uVar7 == 0) {
        return 0;
      }
      uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
      uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
      uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar8 < 2) {
        uVar9 = uVar7 - 1 & 0x5c0c635117f72945;
      }
      else if (uVar7 < 0x5c0c635117f72946) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = 0x5c0c635117f72945 / uVar7;
        }
        uVar9 = 0x5c0c635117f72945 - uVar9 * uVar7;
      }
      else {
        uVar9 = 0x5c0c635117f72945;
      }
      plVar11 = *(long **)(*(long *)(lVar10 + 0x58) + uVar9 * 8);
      if (plVar11 == (long *)0x0) {
        return 0;
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        return 0;
      }
      if (uVar8 < 2) {
        do {
          if (plVar11[1] == 0x5c0c635117f72945) {
            if (plVar11[2] == 0x5c0c635117f72945) goto LAB_01c4a854;
          }
          else if ((plVar11[1] & uVar7 - 1) != uVar9) {
            return 0;
          }
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
      do {
        uVar8 = plVar11[1];
        if (uVar8 == 0x5c0c635117f72945) {
          if (plVar11[2] == 0x5c0c635117f72945) goto LAB_01c4a854;
        }
        else {
          if (uVar7 <= uVar8) {
            uVar4 = 0;
            if (uVar7 != 0) {
              uVar4 = uVar8 / uVar7;
            }
            uVar8 = uVar8 - uVar4 * uVar7;
          }
          if (uVar8 != uVar9) {
            return 0;
          }
        }
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) {
          return 0;
        }
      } while( true );
    default:
      return 0;
    }
  }
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379660), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar10 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar10;
  uVar7 = *(ulong *)(lVar10 + 0x60);
  if (uVar7 == 0) {
    return 0;
  }
  uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar8 < 2) {
    uVar9 = uVar7 - 1 & 0x5c0c635117f72945;
  }
  else if (uVar7 < 0x5c0c635117f72946) {
    uVar9 = 0;
    if (uVar7 != 0) {
      uVar9 = 0x5c0c635117f72945 / uVar7;
    }
    uVar9 = 0x5c0c635117f72945 - uVar9 * uVar7;
  }
  else {
    uVar9 = 0x5c0c635117f72945;
  }
  plVar11 = *(long **)(*(long *)(lVar10 + 0x58) + uVar9 * 8);
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  plVar11 = (long *)*plVar11;
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  if (uVar8 < 2) {
    do {
      if (plVar11[1] == 0x5c0c635117f72945) {
        if (plVar11[2] == 0x5c0c635117f72945) goto LAB_01c49858;
      }
      else if ((plVar11[1] & uVar7 - 1) != uVar9) {
        return 0;
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        return 0;
      }
    } while( true );
  }
  do {
    uVar8 = plVar11[1];
    if (uVar8 == 0x5c0c635117f72945) {
      if (plVar11[2] == 0x5c0c635117f72945) goto LAB_01c49858;
    }
    else {
      if (uVar7 <= uVar8) {
        uVar4 = 0;
        if (uVar7 != 0) {
          uVar4 = uVar8 / uVar7;
        }
        uVar8 = uVar8 - uVar4 * uVar7;
      }
      if (uVar8 != uVar9) {
        return 0;
      }
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      return 0;
    }
  } while( true );
LAB_01c4a154:
  plVar11 = (long *)plVar11[3];
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  plVar1 = plVar11 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = plVar11[0x21];
  uVar13 = 0;
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & 0x246d9bcd1f4a15aa;
    }
    else if (uVar7 < 0x246d9bcd1f4a15ab) {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = 0x246d9bcd1f4a15aa / uVar7;
      }
      uVar9 = 0x246d9bcd1f4a15aa - uVar9 * uVar7;
    }
    else {
      uVar9 = 0x246d9bcd1f4a15aa;
    }
    plVar12 = *(long **)(plVar11[0x20] + uVar9 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar12[1] == 0x246d9bcd1f4a15aa) {
            if (plVar12[2] == 0x246d9bcd1f4a15aa) goto LAB_01c4af60;
          }
          else if ((plVar12[1] & uVar7 - 1) != uVar9) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar12[1];
          if (uVar8 == 0x246d9bcd1f4a15aa) {
            if (plVar12[2] == 0x246d9bcd1f4a15aa) goto LAB_01c4af60;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar4 * uVar7;
            }
            if (uVar8 != uVar9) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
LAB_01c4af64:
  do {
    iVar6 = (int)*plVar1 + -1;
    bVar5 = iVar6 == 0;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  goto LAB_01c4a288;
LAB_01c4af60:
  uVar13 = (undefined4)plVar12[6];
  goto LAB_01c4af64;
LAB_01c4a698:
  plVar11 = (long *)plVar11[3];
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  plVar1 = plVar11 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = plVar11[0x21];
  uVar13 = 0;
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & 0x4a3d2500f09f476c;
    }
    else if (uVar7 < 0x4a3d2500f09f476d) {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = 0x4a3d2500f09f476c / uVar7;
      }
      uVar9 = 0x4a3d2500f09f476c - uVar9 * uVar7;
    }
    else {
      uVar9 = 0x4a3d2500f09f476c;
    }
    plVar12 = *(long **)(plVar11[0x20] + uVar9 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar12[1] == 0x4a3d2500f09f476c) {
            if (plVar12[2] == 0x4a3d2500f09f476c) goto LAB_01c4b1a8;
          }
          else if ((plVar12[1] & uVar7 - 1) != uVar9) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar12[1];
          if (uVar8 == 0x4a3d2500f09f476c) {
            if (plVar12[2] == 0x4a3d2500f09f476c) goto LAB_01c4b1a8;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar4 * uVar7;
            }
            if (uVar8 != uVar9) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
LAB_01c4b1ac:
  do {
    iVar6 = (int)*plVar1 + -1;
    bVar5 = iVar6 == 0;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  goto LAB_01c4a288;
LAB_01c4b1a8:
  uVar13 = (undefined4)plVar12[6];
  goto LAB_01c4b1ac;
LAB_01c4aa10:
  plVar11 = (long *)plVar11[3];
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  plVar1 = plVar11 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = plVar11[0x21];
  uVar13 = 0;
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & 0xbfbd2cc097d66009;
    }
    else if (uVar7 < 0xbfbd2cc097d6600a) {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = 0xbfbd2cc097d66009 / uVar7;
      }
      uVar9 = 0xbfbd2cc097d66009 - uVar9 * uVar7;
    }
    else {
      uVar9 = 0xbfbd2cc097d66009;
    }
    plVar12 = *(long **)(plVar11[0x20] + uVar9 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar12[1] == 0xbfbd2cc097d66009) {
            if (plVar12[2] == -0x4042d33f68299ff7) goto LAB_01c4b41c;
          }
          else if ((plVar12[1] & uVar7 - 1) != uVar9) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar12[1];
          if (uVar8 == 0xbfbd2cc097d66009) {
            if (plVar12[2] == -0x4042d33f68299ff7) goto LAB_01c4b41c;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar4 * uVar7;
            }
            if (uVar8 != uVar9) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
LAB_01c4b420:
  do {
    iVar6 = (int)*plVar1 + -1;
    bVar5 = iVar6 == 0;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  goto LAB_01c4a288;
LAB_01c4b41c:
  uVar13 = (undefined4)plVar12[6];
  goto LAB_01c4b420;
LAB_01c4aba8:
  plVar11 = (long *)plVar11[3];
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  plVar1 = plVar11 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = plVar11[0x21];
  uVar13 = 0;
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & 0x76eeee696e23270d;
    }
    else if (uVar7 < 0x76eeee696e23270e) {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = 0x76eeee696e23270d / uVar7;
      }
      uVar9 = 0x76eeee696e23270d - uVar9 * uVar7;
    }
    else {
      uVar9 = 0x76eeee696e23270d;
    }
    plVar12 = *(long **)(plVar11[0x20] + uVar9 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar12[1] == 0x76eeee696e23270d) {
            if (plVar12[2] == 0x76eeee696e23270d) goto LAB_01c4b478;
          }
          else if ((plVar12[1] & uVar7 - 1) != uVar9) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar12[1];
          if (uVar8 == 0x76eeee696e23270d) {
            if (plVar12[2] == 0x76eeee696e23270d) goto LAB_01c4b478;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar4 * uVar7;
            }
            if (uVar8 != uVar9) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
LAB_01c4b47c:
  do {
    iVar6 = (int)*plVar1 + -1;
    bVar5 = iVar6 == 0;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  goto LAB_01c4a288;
LAB_01c4b478:
  uVar13 = (undefined4)plVar12[6];
  goto LAB_01c4b47c;
LAB_01c4b958:
  plVar11 = (long *)plVar11[3];
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  plVar1 = plVar11 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = plVar11[0x21];
  uVar13 = 0;
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & 0x6e4f62aeac5aafd7;
    }
    else if (uVar7 < 0x6e4f62aeac5aafd8) {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = 0x6e4f62aeac5aafd7 / uVar7;
      }
      uVar9 = 0x6e4f62aeac5aafd7 - uVar9 * uVar7;
    }
    else {
      uVar9 = 0x6e4f62aeac5aafd7;
    }
    plVar12 = *(long **)(plVar11[0x20] + uVar9 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar12[1] == 0x6e4f62aeac5aafd7) {
            if (plVar12[2] == 0x6e4f62aeac5aafd7) goto LAB_01c4bb9c;
          }
          else if ((plVar12[1] & uVar7 - 1) != uVar9) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar12[1];
          if (uVar8 == 0x6e4f62aeac5aafd7) {
            if (plVar12[2] == 0x6e4f62aeac5aafd7) goto LAB_01c4bb9c;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar4 * uVar7;
            }
            if (uVar8 != uVar9) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
LAB_01c4bba0:
  do {
    iVar6 = (int)*plVar1 + -1;
    bVar5 = iVar6 == 0;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  goto LAB_01c4a288;
LAB_01c4bb9c:
  uVar13 = (undefined4)plVar12[6];
  goto LAB_01c4bba0;
LAB_01c4b2fc:
  plVar11 = (long *)plVar11[3];
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  plVar1 = plVar11 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = plVar11[0x21];
  uVar13 = 0;
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & 0x3f94fe9dbcee350b;
    }
    else if (uVar7 < 0x3f94fe9dbcee350c) {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = 0x3f94fe9dbcee350b / uVar7;
      }
      uVar9 = 0x3f94fe9dbcee350b - uVar9 * uVar7;
    }
    else {
      uVar9 = 0x3f94fe9dbcee350b;
    }
    plVar12 = *(long **)(plVar11[0x20] + uVar9 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar12[1] == 0x3f94fe9dbcee350b) {
            if (plVar12[2] == 0x3f94fe9dbcee350b) goto LAB_01c4b554;
          }
          else if ((plVar12[1] & uVar7 - 1) != uVar9) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar12[1];
          if (uVar8 == 0x3f94fe9dbcee350b) {
            if (plVar12[2] == 0x3f94fe9dbcee350b) goto LAB_01c4b554;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar4 * uVar7;
            }
            if (uVar8 != uVar9) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
LAB_01c4b558:
  do {
    iVar6 = (int)*plVar1 + -1;
    bVar5 = iVar6 == 0;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  goto LAB_01c4a288;
LAB_01c4b554:
  uVar13 = (undefined4)plVar12[6];
  goto LAB_01c4b558;
LAB_01c49f34:
  plVar11 = (long *)plVar11[3];
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  plVar1 = plVar11 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = plVar11[0x21];
  uVar13 = 0;
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & 0x65b9aa93022fdd6e;
    }
    else if (uVar7 < 0x65b9aa93022fdd6f) {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = 0x65b9aa93022fdd6e / uVar7;
      }
      uVar9 = 0x65b9aa93022fdd6e - uVar9 * uVar7;
    }
    else {
      uVar9 = 0x65b9aa93022fdd6e;
    }
    plVar12 = *(long **)(plVar11[0x20] + uVar9 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar12[1] == 0x65b9aa93022fdd6e) {
            if (plVar12[2] == 0x65b9aa93022fdd6e) goto LAB_01c4af04;
          }
          else if ((plVar12[1] & uVar7 - 1) != uVar9) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar12[1];
          if (uVar8 == 0x65b9aa93022fdd6e) {
            if (plVar12[2] == 0x65b9aa93022fdd6e) goto LAB_01c4af04;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar4 * uVar7;
            }
            if (uVar8 != uVar9) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
LAB_01c4af08:
  do {
    iVar6 = (int)*plVar1 + -1;
    bVar5 = iVar6 == 0;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  goto LAB_01c4a288;
LAB_01c4af04:
  uVar13 = (undefined4)plVar12[6];
  goto LAB_01c4af08;
switchD_01c49afc_caseD_2:
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379660), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar10 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar10;
  uVar7 = *(ulong *)(lVar10 + 0x60);
  if (uVar7 == 0) {
    return 0;
  }
  uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar8 < 2) {
    uVar9 = uVar7 - 1 & 0x5c0c635117f72945;
  }
  else if (uVar7 < 0x5c0c635117f72946) {
    uVar9 = 0;
    if (uVar7 != 0) {
      uVar9 = 0x5c0c635117f72945 / uVar7;
    }
    uVar9 = 0x5c0c635117f72945 - uVar9 * uVar7;
  }
  else {
    uVar9 = 0x5c0c635117f72945;
  }
  plVar11 = *(long **)(*(long *)(lVar10 + 0x58) + uVar9 * 8);
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  plVar11 = (long *)*plVar11;
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  if (uVar8 < 2) {
    do {
      if (plVar11[1] == 0x5c0c635117f72945) {
        if (plVar11[2] == 0x5c0c635117f72945) goto LAB_01c49bbc;
      }
      else if ((plVar11[1] & uVar7 - 1) != uVar9) {
        return 0;
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        return 0;
      }
    } while( true );
  }
  do {
    uVar8 = plVar11[1];
    if (uVar8 == 0x5c0c635117f72945) {
      if (plVar11[2] == 0x5c0c635117f72945) break;
    }
    else {
      if (uVar7 <= uVar8) {
        uVar4 = 0;
        if (uVar7 != 0) {
          uVar4 = uVar8 / uVar7;
        }
        uVar8 = uVar8 - uVar4 * uVar7;
      }
      if (uVar8 != uVar9) {
        return 0;
      }
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      return 0;
    }
  } while( true );
LAB_01c49bbc:
  plVar11 = (long *)plVar11[3];
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  plVar1 = plVar11 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = plVar11[0x21];
  uVar13 = 0;
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & 0x5afe5f3d3cbb94f8;
    }
    else if (uVar7 < 0x5afe5f3d3cbb94f9) {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = 0x5afe5f3d3cbb94f8 / uVar7;
      }
      uVar9 = 0x5afe5f3d3cbb94f8 - uVar9 * uVar7;
    }
    else {
      uVar9 = 0x5afe5f3d3cbb94f8;
    }
    plVar12 = *(long **)(plVar11[0x20] + uVar9 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar12[1] == 0x5afe5f3d3cbb94f8) {
            if (plVar12[2] == 0x5afe5f3d3cbb94f8) goto LAB_01c4acec;
          }
          else if ((plVar12[1] & uVar7 - 1) != uVar9) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar12[1];
          if (uVar8 == 0x5afe5f3d3cbb94f8) {
            if (plVar12[2] == 0x5afe5f3d3cbb94f8) goto LAB_01c4acec;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar4 * uVar7;
            }
            if (uVar8 != uVar9) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
LAB_01c4acf0:
  do {
    iVar6 = (int)*plVar1 + -1;
    bVar5 = iVar6 == 0;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  goto LAB_01c4a288;
LAB_01c4acec:
  uVar13 = (undefined4)plVar12[6];
  goto LAB_01c4acf0;
LAB_01c49a00:
  plVar11 = (long *)plVar11[3];
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  plVar1 = plVar11 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = plVar11[0x21];
  uVar13 = 0;
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & 0xf72e0bb5e6e24ebb;
    }
    else if (uVar7 < 0xf72e0bb5e6e24ebc) {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = 0xf72e0bb5e6e24ebb / uVar7;
      }
      uVar9 = 0xf72e0bb5e6e24ebb - uVar9 * uVar7;
    }
    else {
      uVar9 = 0xf72e0bb5e6e24ebb;
    }
    plVar12 = *(long **)(plVar11[0x20] + uVar9 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar12[1] == 0xf72e0bb5e6e24ebb) {
            if (plVar12[2] == -0x8d1f44a191db145) goto LAB_01c4a274;
          }
          else if ((plVar12[1] & uVar7 - 1) != uVar9) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar12[1];
          if (uVar8 == 0xf72e0bb5e6e24ebb) {
            if (plVar12[2] == -0x8d1f44a191db145) goto LAB_01c4a274;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar4 * uVar7;
            }
            if (uVar8 != uVar9) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
LAB_01c4a278:
  do {
    iVar6 = (int)*plVar1 + -1;
    bVar5 = iVar6 == 0;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  goto LAB_01c4a288;
LAB_01c4a274:
  uVar13 = (undefined4)plVar12[6];
  goto LAB_01c4a278;
LAB_01c4a854:
  plVar11 = (long *)plVar11[3];
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  plVar1 = plVar11 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = plVar11[0x21];
  uVar13 = 0;
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & 0x28a3be879fba4221;
    }
    else if (uVar7 < 0x28a3be879fba4222) {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = 0x28a3be879fba4221 / uVar7;
      }
      uVar9 = 0x28a3be879fba4221 - uVar9 * uVar7;
    }
    else {
      uVar9 = 0x28a3be879fba4221;
    }
    plVar12 = *(long **)(plVar11[0x20] + uVar9 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar12[1] == 0x28a3be879fba4221) {
            if (plVar12[2] == 0x28a3be879fba4221) goto LAB_01c4b228;
          }
          else if ((plVar12[1] & uVar7 - 1) != uVar9) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar12[1];
          if (uVar8 == 0x28a3be879fba4221) {
            if (plVar12[2] == 0x28a3be879fba4221) goto LAB_01c4b228;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar4 * uVar7;
            }
            if (uVar8 != uVar9) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
LAB_01c4b22c:
  do {
    iVar6 = (int)*plVar1 + -1;
    bVar5 = iVar6 == 0;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  goto LAB_01c4a288;
LAB_01c4b228:
  uVar13 = (undefined4)plVar12[6];
  goto LAB_01c4b22c;
LAB_01c4b628:
  plVar11 = (long *)plVar11[3];
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  plVar1 = plVar11 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = plVar11[0x21];
  uVar13 = 0;
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & 0xfcfeb1107eddc354;
    }
    else if (uVar7 < 0xfcfeb1107eddc355) {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = 0xfcfeb1107eddc354 / uVar7;
      }
      uVar9 = 0xfcfeb1107eddc354 - uVar9 * uVar7;
    }
    else {
      uVar9 = 0xfcfeb1107eddc354;
    }
    plVar12 = *(long **)(plVar11[0x20] + uVar9 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar12[1] == 0xfcfeb1107eddc354) {
            if (plVar12[2] == -0x3014eef81223cac) goto LAB_01c4bafc;
          }
          else if ((plVar12[1] & uVar7 - 1) != uVar9) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar12[1];
          if (uVar8 == 0xfcfeb1107eddc354) {
            if (plVar12[2] == -0x3014eef81223cac) goto LAB_01c4bafc;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar4 * uVar7;
            }
            if (uVar8 != uVar9) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
LAB_01c4bb00:
  do {
    iVar6 = (int)*plVar1 + -1;
    bVar5 = iVar6 == 0;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  goto LAB_01c4a288;
LAB_01c4bafc:
  uVar13 = (undefined4)plVar12[6];
  goto LAB_01c4bb00;
LAB_01c4b7c0:
  plVar11 = (long *)plVar11[3];
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  plVar1 = plVar11 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = plVar11[0x21];
  uVar13 = 0;
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & 0x18dcb4e340b8843e;
    }
    else if (uVar7 < 0x18dcb4e340b8843f) {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = 0x18dcb4e340b8843e / uVar7;
      }
      uVar9 = 0x18dcb4e340b8843e - uVar9 * uVar7;
    }
    else {
      uVar9 = 0x18dcb4e340b8843e;
    }
    plVar12 = *(long **)(plVar11[0x20] + uVar9 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar12[1] == 0x18dcb4e340b8843e) {
            if (plVar12[2] == 0x18dcb4e340b8843e) goto LAB_01c4bb4c;
          }
          else if ((plVar12[1] & uVar7 - 1) != uVar9) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar12[1];
          if (uVar8 == 0x18dcb4e340b8843e) {
            if (plVar12[2] == 0x18dcb4e340b8843e) goto LAB_01c4bb4c;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar4 * uVar7;
            }
            if (uVar8 != uVar9) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
LAB_01c4bb50:
  do {
    iVar6 = (int)*plVar1 + -1;
    bVar5 = iVar6 == 0;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  goto LAB_01c4a288;
LAB_01c4bb4c:
  uVar13 = (undefined4)plVar12[6];
  goto LAB_01c4bb50;
LAB_01c4adc0:
  plVar11 = (long *)plVar11[3];
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  plVar1 = plVar11 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = plVar11[0x21];
  uVar13 = 0;
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & 0x1bbe42e62dc0f1ce;
    }
    else if (uVar7 < 0x1bbe42e62dc0f1cf) {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = 0x1bbe42e62dc0f1ce / uVar7;
      }
      uVar9 = 0x1bbe42e62dc0f1ce - uVar9 * uVar7;
    }
    else {
      uVar9 = 0x1bbe42e62dc0f1ce;
    }
    plVar12 = *(long **)(plVar11[0x20] + uVar9 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar12[1] == 0x1bbe42e62dc0f1ce) {
            if (plVar12[2] == 0x1bbe42e62dc0f1ce) goto LAB_01c4b4d4;
          }
          else if ((plVar12[1] & uVar7 - 1) != uVar9) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar12[1];
          if (uVar8 == 0x1bbe42e62dc0f1ce) {
            if (plVar12[2] == 0x1bbe42e62dc0f1ce) goto LAB_01c4b4d4;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar4 * uVar7;
            }
            if (uVar8 != uVar9) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
LAB_01c4b4d8:
  do {
    iVar6 = (int)*plVar1 + -1;
    bVar5 = iVar6 == 0;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  goto LAB_01c4a288;
LAB_01c4b4d4:
  uVar13 = (undefined4)plVar12[6];
  goto LAB_01c4b4d8;
LAB_01c4a368:
  plVar11 = (long *)plVar11[3];
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  plVar1 = plVar11 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = plVar11[0x21];
  uVar13 = 0;
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & 0x8e0bfcf0a4d85d88;
    }
    else if (uVar7 < 0x8e0bfcf0a4d85d89) {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = 0x8e0bfcf0a4d85d88 / uVar7;
      }
      uVar9 = 0x8e0bfcf0a4d85d88 - uVar9 * uVar7;
    }
    else {
      uVar9 = 0x8e0bfcf0a4d85d88;
    }
    plVar12 = *(long **)(plVar11[0x20] + uVar9 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar12[1] == 0x8e0bfcf0a4d85d88) {
            if (plVar12[2] == -0x71f4030f5b27a278) goto LAB_01c4b0f0;
          }
          else if ((plVar12[1] & uVar7 - 1) != uVar9) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar12[1];
          if (uVar8 == 0x8e0bfcf0a4d85d88) {
            if (plVar12[2] == -0x71f4030f5b27a278) goto LAB_01c4b0f0;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar4 * uVar7;
            }
            if (uVar8 != uVar9) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
LAB_01c4b0f4:
  do {
    iVar6 = (int)*plVar1 + -1;
    bVar5 = iVar6 == 0;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  goto LAB_01c4a288;
LAB_01c4b0f0:
  uVar13 = (undefined4)plVar12[6];
  goto LAB_01c4b0f4;
LAB_01c4a500:
  plVar11 = (long *)plVar11[3];
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  plVar1 = plVar11 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = plVar11[0x21];
  uVar13 = 0;
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & 0x2b874fb270f6409;
    }
    else if (uVar7 < 0x2b874fb270f640a) {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = 0x2b874fb270f6409 / uVar7;
      }
      uVar9 = 0x2b874fb270f6409 - uVar9 * uVar7;
    }
    else {
      uVar9 = 0x2b874fb270f6409;
    }
    plVar12 = *(long **)(plVar11[0x20] + uVar9 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar12[1] == 0x2b874fb270f6409) {
            if (plVar12[2] == 0x2b874fb270f6409) goto LAB_01c4b14c;
          }
          else if ((plVar12[1] & uVar7 - 1) != uVar9) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar12[1];
          if (uVar8 == 0x2b874fb270f6409) {
            if (plVar12[2] == 0x2b874fb270f6409) goto LAB_01c4b14c;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar4 * uVar7;
            }
            if (uVar8 != uVar9) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
LAB_01c4b150:
  do {
    iVar6 = (int)*plVar1 + -1;
    bVar5 = iVar6 == 0;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  goto LAB_01c4a288;
LAB_01c4b14c:
  uVar13 = (undefined4)plVar12[6];
  goto LAB_01c4b150;
switchD_01c49cdc_caseD_2:
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379660), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar10 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar10;
  uVar7 = *(ulong *)(lVar10 + 0x60);
  if (uVar7 == 0) {
    return 0;
  }
  uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar8 < 2) {
    uVar9 = uVar7 - 1 & 0x5c0c635117f72945;
  }
  else if (uVar7 < 0x5c0c635117f72946) {
    uVar9 = 0;
    if (uVar7 != 0) {
      uVar9 = 0x5c0c635117f72945 / uVar7;
    }
    uVar9 = 0x5c0c635117f72945 - uVar9 * uVar7;
  }
  else {
    uVar9 = 0x5c0c635117f72945;
  }
  plVar11 = *(long **)(*(long *)(lVar10 + 0x58) + uVar9 * 8);
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  plVar11 = (long *)*plVar11;
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  if (uVar8 < 2) {
    do {
      if (plVar11[1] == 0x5c0c635117f72945) {
        if (plVar11[2] == 0x5c0c635117f72945) goto LAB_01c49d9c;
      }
      else if ((plVar11[1] & uVar7 - 1) != uVar9) {
        return 0;
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        return 0;
      }
    } while( true );
  }
  do {
    uVar8 = plVar11[1];
    if (uVar8 == 0x5c0c635117f72945) {
      if (plVar11[2] == 0x5c0c635117f72945) break;
    }
    else {
      if (uVar7 <= uVar8) {
        uVar4 = 0;
        if (uVar7 != 0) {
          uVar4 = uVar8 / uVar7;
        }
        uVar8 = uVar8 - uVar4 * uVar7;
      }
      if (uVar8 != uVar9) {
        return 0;
      }
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      return 0;
    }
  } while( true );
LAB_01c49d9c:
  plVar11 = (long *)plVar11[3];
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  plVar1 = plVar11 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = plVar11[0x21];
  uVar13 = 0;
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & 0xdaccd0fcdba97653;
    }
    else if (uVar7 < 0xdaccd0fcdba97654) {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = 0xdaccd0fcdba97653 / uVar7;
      }
      uVar9 = 0xdaccd0fcdba97653 - uVar9 * uVar7;
    }
    else {
      uVar9 = 0xdaccd0fcdba97653;
    }
    plVar12 = *(long **)(plVar11[0x20] + uVar9 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar12[1] == 0xdaccd0fcdba97653) {
            if (plVar12[2] == -0x25332f03245689ad) goto LAB_01c4afe0;
          }
          else if ((plVar12[1] & uVar7 - 1) != uVar9) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar12[1];
          if (uVar8 == 0xdaccd0fcdba97653) {
            if (plVar12[2] == -0x25332f03245689ad) goto LAB_01c4afe0;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar4 * uVar7;
            }
            if (uVar8 != uVar9) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
LAB_01c4afe4:
  do {
    iVar6 = (int)*plVar1 + -1;
    bVar5 = iVar6 == 0;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  goto LAB_01c4a288;
LAB_01c4afe0:
  uVar13 = (undefined4)plVar12[6];
  goto LAB_01c4afe4;
LAB_01c4a078:
  uVar13 = (undefined4)plVar12[6];
  goto LAB_01c4a07c;
LAB_01c49858:
  plVar11 = (long *)plVar11[3];
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  plVar1 = plVar11 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar7 = plVar11[0x21];
  uVar13 = 0;
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & 0x479cf21782d1726a;
    }
    else if (uVar7 < 0x479cf21782d1726b) {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = 0x479cf21782d1726a / uVar7;
      }
      uVar9 = 0x479cf21782d1726a - uVar9 * uVar7;
    }
    else {
      uVar9 = 0x479cf21782d1726a;
    }
    plVar12 = *(long **)(plVar11[0x20] + uVar9 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar12[1] == 0x479cf21782d1726a) {
            if (plVar12[2] == 0x479cf21782d1726a) goto LAB_01c4a078;
          }
          else if ((plVar12[1] & uVar7 - 1) != uVar9) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar12[1];
          if (uVar8 == 0x479cf21782d1726a) {
            if (plVar12[2] == 0x479cf21782d1726a) goto LAB_01c4a078;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar4 * uVar7;
            }
            if (uVar8 != uVar9) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
LAB_01c4a07c:
  do {
    iVar6 = (int)*plVar1 + -1;
    bVar5 = iVar6 == 0;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01c4a288:
  if (bVar5) {
    (**(code **)(*plVar11 + 0x10))();
  }
  return uVar13;
}


