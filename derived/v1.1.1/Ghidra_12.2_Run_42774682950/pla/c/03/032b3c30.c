/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032b3c30; name: FUN_032b3c30
 */


void FUN_032b3c30(char *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char local_50 [4];
  char local_4c [4];
  char local_48 [4];
  byte local_44 [4];
  
  if (0 < param_2) {
    uVar2 = 0;
    do {
      while( true ) {
        FUN_032af29c(param_3,local_50,1);
        *param_1 = local_50[0];
        FUN_032af29c(param_3,local_4c,1);
        param_1[1] = local_4c[0];
        FUN_032af29c(param_3,local_48,1);
        param_1[2] = local_48[0];
        FUN_032af29c(param_3,local_44,1);
        param_1[3] = local_44[0];
        if (((*param_1 != '\x01') || (param_1[1] != '\x01')) || (param_1[2] != '\x01')) break;
        iVar1 = (uint)local_44[0] << (ulong)(uVar2 & 0x1f);
        if (0 < iVar1) {
          iVar3 = iVar1;
          do {
            FUN_032c4a00(param_1,param_1 + -4,4);
            iVar3 = iVar3 + -1;
            param_1 = param_1 + 4;
          } while (0 < iVar3);
          param_2 = param_2 - iVar1;
        }
        uVar2 = uVar2 + 8;
        if (param_2 < 1) {
          return;
        }
      }
      uVar2 = 0;
      param_1 = param_1 + 4;
      param_2 = param_2 + -1;
    } while (0 < param_2);
  }
  return;
}


