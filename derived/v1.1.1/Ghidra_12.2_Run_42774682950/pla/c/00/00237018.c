/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00237018; name: FUN_00237018
 */


void FUN_00237018(long param_1,undefined8 param_2,long param_3,char *param_4)

{
  long lVar1;
  char cVar2;
  char *pcVar3;
  long lVar4;
  char *pcVar5;
  int iVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x40);
  lVar1 = param_1 + 0x38;
  if (lVar1 != lVar7) {
    do {
      lVar4 = (**(code **)(**(long **)(param_3 + 0x18) + 0x78))
                        (*(long **)(param_3 + 0x18),*(undefined8 *)(lVar7 + 0x10),1);
      if (lVar4 == 0) {
        return;
      }
      lVar7 = *(long *)(lVar7 + 8);
    } while (lVar1 != lVar7);
    lVar7 = *(long *)(param_1 + 0x40);
  }
  do {
    if (lVar1 == lVar7) {
      *(undefined1 *)(param_1 + 0x10f) = 0;
      *(long *)(param_1 + 0x10) = param_3;
      cVar2 = *param_4;
joined_r0x002371d0:
      if (cVar2 == '\0') {
        iVar6 = 0;
      }
      else if (param_4[1] == '\0') {
        iVar6 = 1;
      }
      else if (param_4[2] == '\0') {
        iVar6 = 2;
      }
      else if (param_4[3] == '\0') {
        iVar6 = 3;
      }
      else if (param_4[4] == '\0') {
        iVar6 = 4;
      }
      else if (param_4[5] == '\0') {
        iVar6 = 5;
      }
      else if (param_4[6] == '\0') {
        iVar6 = 6;
      }
      else if (param_4[7] == '\0') {
        iVar6 = 7;
      }
      else if (param_4[8] == '\0') {
        iVar6 = 8;
      }
      else if (param_4[9] == '\0') {
        iVar6 = 9;
      }
      else if (param_4[10] == '\0') {
        iVar6 = 10;
      }
      else if (param_4[0xb] == '\0') {
        iVar6 = 0xb;
      }
      else if (param_4[0xc] == '\0') {
        iVar6 = 0xc;
      }
      else if (param_4[0xd] == '\0') {
        iVar6 = 0xd;
      }
      else if (param_4[0xe] == '\0') {
        iVar6 = 0xe;
      }
      else if (param_4[0xf] == '\0') {
        iVar6 = 0xf;
      }
      else if (param_4[0x10] == '\0') {
        iVar6 = 0x10;
      }
      else if (param_4[0x11] == '\0') {
        iVar6 = 0x11;
      }
      else if (param_4[0x12] == '\0') {
        iVar6 = 0x12;
      }
      else if (param_4[0x13] == '\0') {
        iVar6 = 0x13;
      }
      else if (param_4[0x14] == '\0') {
        iVar6 = 0x14;
      }
      else if (param_4[0x15] == '\0') {
        iVar6 = 0x15;
      }
      else if (param_4[0x16] == '\0') {
        iVar6 = 0x16;
      }
      else if (param_4[0x17] == '\0') {
        iVar6 = 0x17;
      }
      else if (param_4[0x18] == '\0') {
        iVar6 = 0x18;
      }
      else if (param_4[0x19] == '\0') {
        iVar6 = 0x19;
      }
      else if (param_4[0x1a] == '\0') {
        iVar6 = 0x1a;
      }
      else if (param_4[0x1b] == '\0') {
        iVar6 = 0x1b;
      }
      else if (param_4[0x1c] == '\0') {
        iVar6 = 0x1c;
      }
      else if (param_4[0x1d] == '\0') {
        iVar6 = 0x1d;
      }
      else if (param_4[0x1e] == '\0') {
        iVar6 = 0x1e;
      }
      else {
        iVar6 = 0x1f;
        if (param_4[0x1f] != '\0') {
          iVar6 = 0x20;
        }
      }
      pcVar5 = (char *)(**(code **)PTR_DAT_04372ba8)(iVar6 + 1,4,*(undefined8 *)PTR_DAT_04372bb8);
      pcVar3 = pcVar5;
      for (; (iVar6 != 0 && (*param_4 != '\0')); param_4 = param_4 + 1) {
        iVar6 = iVar6 + -1;
        *pcVar3 = *param_4;
        pcVar3 = pcVar3 + 1;
      }
      *pcVar3 = '\0';
      do {
        cVar2 = *param_4;
        param_4 = param_4 + 1;
      } while (cVar2 != '\0');
      *(char **)(param_1 + 0x18) = pcVar5;
      FUN_0025970c(param_1 + 0x48,param_3,param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined2 *)(param_1 + 0x10d) = 0;
      FUN_00237f40(param_1 + 0x130,param_1 + 0x38);
      return;
    }
    if (*(int *)(lVar7 + 0x18) == 0x1b) {
      *(undefined1 *)(param_1 + 0x10f) = 1;
      *(long *)(param_1 + 0x10) = param_3;
      cVar2 = *param_4;
      goto joined_r0x002371d0;
    }
    lVar7 = *(long *)(lVar7 + 8);
  } while( true );
}


