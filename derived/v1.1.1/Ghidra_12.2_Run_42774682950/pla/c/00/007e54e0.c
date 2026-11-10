/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e54e0; name: FUN_007e54e0
 */


void FUN_007e54e0(long *param_1)

{
  ulong uVar1;
  int iVar2;
  long *plVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *param_1;
  plVar3 = (long *)FUN_007ecf2c();
  uVar1 = 0;
  if (*plVar3 != 0) {
    uVar1 = lVar6 / *plVar3;
  }
  DAT_041aa8d8 = DAT_041aa8d8 + uVar1;
  if (uVar1 < DAT_041aa8e8) {
    DAT_041aa8e8 = uVar1;
  }
  if (DAT_041aa8e0 < uVar1) {
    DAT_041aa8e0 = uVar1;
  }
  puVar4 = &DAT_041aa8f8;
  if (DAT_041aa8f8 < uVar1) {
    uVar5 = 0;
  }
  else {
    puVar4 = &DAT_041aa908;
    if (DAT_041aa908 < uVar1) {
      uVar5 = 1;
    }
    else {
      puVar4 = &DAT_041aa918;
      if (DAT_041aa918 < uVar1) {
        uVar5 = 2;
      }
      else {
        puVar4 = &DAT_041aa928;
        if (DAT_041aa928 < uVar1) {
          uVar5 = 3;
        }
        else {
          puVar4 = &DAT_041aa938;
          if (DAT_041aa938 < uVar1) {
            uVar5 = 4;
          }
          else {
            puVar4 = &DAT_041aa948;
            if (DAT_041aa948 < uVar1) {
              uVar5 = 5;
            }
            else {
              puVar4 = &DAT_041aa958;
              if (uVar1 <= DAT_041aa958) {
                puVar4 = &DAT_041aa968;
                if (uVar1 <= DAT_041aa968) {
                  DAT_041aa8d0 = DAT_041aa8d0 + 1;
                  return;
                }
                uVar5 = 7;
                goto LAB_007e56f0;
              }
              uVar5 = 6;
            }
          }
        }
      }
    }
  }
  DAT_041aa960 = DAT_041aa950;
  DAT_041aa968 = DAT_041aa958;
  if (uVar5 < 6) {
    DAT_041aa950 = DAT_041aa940;
    DAT_041aa958 = DAT_041aa948;
    if (uVar5 != 5) {
      DAT_041aa940 = DAT_041aa930;
      DAT_041aa948 = DAT_041aa938;
      if (uVar5 < 4) {
        DAT_041aa930 = DAT_041aa920;
        DAT_041aa938 = DAT_041aa928;
        if (uVar5 != 3) {
          DAT_041aa920 = DAT_041aa910;
          DAT_041aa928 = DAT_041aa918;
          if (uVar5 < 2) {
            DAT_041aa910 = DAT_041aa900;
            DAT_041aa918 = DAT_041aa908;
            if (uVar5 == 0) {
              DAT_041aa900 = DAT_041aa8f0;
              DAT_041aa908 = DAT_041aa8f8;
            }
          }
        }
      }
    }
  }
LAB_007e56f0:
  iVar2 = DAT_041aa8d0 + 1;
  (&DAT_041aa8f0)[uVar5 * 4] = DAT_041aa8d0;
  DAT_041aa8d0 = iVar2;
  *puVar4 = uVar1;
  return;
}


