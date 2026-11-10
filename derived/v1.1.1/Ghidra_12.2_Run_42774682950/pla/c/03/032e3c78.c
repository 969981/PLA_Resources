/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e3c78; name: FUN_032e3c78
 */


int FUN_032e3c78(char *param_1,ulong *param_2,char *param_3,ulong *param_4)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  
  if (param_3 != (char *)0x0 || param_1 != (char *)0x0) {
    if (param_1 == (char *)0x0) {
      return -1;
    }
    if (param_3 == (char *)0x0) {
      return 1;
    }
    if ((param_1 != param_3) && (iVar3 = strcmp(param_1,param_3), iVar3 != 0)) {
      return iVar3;
    }
    if (param_2 != param_4) {
      if ((param_2 == (ulong *)0x0) || (param_4 == (ulong *)0x0)) {
        if ((param_2 != (ulong *)0x0) && ((short)param_2[1] != 0)) {
          return 1;
        }
        if ((param_4 != (ulong *)0x0) && ((short)param_4[1] != 0)) {
          return -1;
        }
      }
      else {
        uVar2 = (ushort)param_2[1];
        uVar6 = (ulong)uVar2;
        if (uVar2 < (ushort)param_4[1]) {
          return -1;
        }
        if ((ushort)param_4[1] < uVar2) {
          return 1;
        }
        if (uVar2 != 0) {
          do {
            puVar5 = param_2 + 2;
            puVar4 = param_4 + 2;
            bVar1 = *(byte *)param_2[3];
            if (bVar1 < *(byte *)param_4[3]) {
              return -1;
            }
            if (*(byte *)param_4[3] < bVar1) {
              return 1;
            }
            if (bVar1 == 0x74) {
              iVar3 = FUN_032e3dac(*puVar5,*puVar4);
              if (iVar3 != 0) {
                return iVar3;
              }
            }
            else if (bVar1 == 0x76) {
              if (*puVar5 < *puVar4) {
                return -1;
              }
              if (*puVar4 < *puVar5) {
                return 1;
              }
            }
            uVar6 = uVar6 - 1;
            param_4 = puVar4;
            param_2 = puVar5;
          } while (uVar6 != 0);
        }
      }
    }
  }
  return 0;
}


