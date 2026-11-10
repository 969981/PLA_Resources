/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00443c70; name: FUN_00443c70
 */


int FUN_00443c70(char *param_1,ulong param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  
  iVar3 = (int)param_2;
  if ((param_3 >> 1 & 1) == 0) {
    if ((param_3 >> 2 & 1) == 0) {
      if (0 < iVar3) {
        uVar4 = 0;
        cVar2 = *param_1;
        if (cVar2 != '\n' && cVar2 != '\r') {
          do {
            iVar3 = FUN_00405430(cVar2,0x40);
            if (iVar3 != 0) {
              param_1[uVar4] = ' ';
            }
            uVar4 = uVar4 + 1;
          } while (((param_2 & 0xffffffff) != uVar4) &&
                  (cVar2 = param_1[uVar4], cVar2 != '\n' && cVar2 != '\r'));
        }
        goto LAB_00443d54;
      }
    }
    else if (0 < iVar3) {
      uVar4 = 0;
      do {
        iVar3 = FUN_00405430(param_1[uVar4],0x400);
        if (((iVar3 == 0) || (param_1[uVar4] == '\n')) || (param_1[uVar4] == '\r')) break;
        uVar4 = uVar4 + 1;
      } while ((param_2 & 0xffffffff) != uVar4);
      goto LAB_00443d54;
    }
    uVar4 = 0;
  }
  else {
    if (-1 < iVar3) {
      param_2 = (long)iVar3;
      do {
        if (0x20 < (byte)param_1[param_2]) goto LAB_00443d08;
        uVar4 = param_2 - 1;
        bVar1 = 0 < (long)param_2;
        param_2 = uVar4;
      } while (bVar1);
      param_2 = uVar4 & 0xffffffff;
    }
LAB_00443d08:
    uVar4 = (ulong)((int)param_2 + 1);
  }
LAB_00443d54:
  (param_1 + (int)uVar4)[0] = '\n';
  (param_1 + (int)uVar4)[1] = '\0';
  return (int)uVar4 + 1;
}


