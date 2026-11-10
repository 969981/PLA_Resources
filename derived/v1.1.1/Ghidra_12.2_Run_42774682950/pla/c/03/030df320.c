/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030df320; name: FUN_030df320
 */


void FUN_030df320(int param_1,int param_2,long param_3,long param_4,long param_5,undefined1 *param_6
                 ,long param_7)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  *param_6 = 0;
  if (0 < param_2) {
    bVar3 = false;
    lVar5 = (long)param_2;
    do {
      cVar2 = *(char *)(param_4 + -1 + lVar5);
      lVar6 = lVar5 + -1;
      *(undefined1 *)(param_5 + -1 + lVar5) = 1;
      *(undefined1 *)(param_7 + -1 + lVar5) = 0;
      if (cVar2 != '\0') {
        iVar1 = *(int *)(param_3 + -4 + lVar5 * 4);
        iVar4 = 0;
        if (iVar1 != 0) {
          iVar4 = param_1 / iVar1;
        }
        param_1 = param_1 - iVar4 * iVar1;
        bVar3 = bVar3 || iVar4 < 1;
        *(bool *)(param_5 + -1 + lVar5) = 0 < iVar4;
        *param_6 = bVar3;
        if ((cVar2 == '\x03') && (iVar4 == 2)) {
          *(undefined1 *)(param_7 + -1 + lVar5) = 1;
        }
      }
      lVar5 = lVar6;
    } while (0 < lVar6);
  }
  return;
}


