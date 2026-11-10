/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00153ca0; name: FUN_00153ca0
 */


void FUN_00153ca0(undefined8 param_1,undefined8 param_2,long param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_e0 [8];
  undefined8 local_d8;
  char *local_d0;
  char *local_c8;
  int local_b8;
  undefined4 local_b4;
  char local_a9;
  undefined1 auStack_a8 [72];
  
  iVar1 = FUN_0014fef0();
  iVar4 = 1;
  iVar5 = 1;
  do {
    iVar3 = iVar5;
    iVar5 = iVar4;
    iVar2 = FUN_00159110(param_2,iVar5,auStack_e0);
    iVar4 = iVar5 << 1;
  } while (iVar2 != 0);
  while (iVar3 < iVar5) {
    iVar4 = iVar5 + iVar3;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 1;
    }
    iVar4 = iVar4 >> 1;
    iVar2 = FUN_00159110(param_2,iVar4,auStack_e0);
    if (iVar2 != 0) {
      iVar3 = iVar4 + 1;
      iVar4 = iVar5;
    }
    iVar5 = iVar4;
  }
  iVar4 = 10;
  if ((int)(iVar5 + ~param_4) < 0x16) {
    iVar4 = -1;
  }
  if (param_3 != 0) {
    FUN_00151650(param_1,&DAT_039b05f7,param_3);
  }
  iVar3 = FUN_0014fd20(param_1,10);
  if (iVar3 == 0) {
    FUN_00154110(param_1,"stack overflow");
  }
  FUN_00151570(param_1,"stack traceback:");
  iVar3 = FUN_00159110(param_2,param_4,auStack_e0);
  if (iVar3 == 0) {
LAB_00153f70:
    iVar5 = FUN_0014fef0(param_1);
    FUN_00153380(param_1,iVar5 - iVar1);
    return;
  }
  iVar3 = iVar4 + -1;
  if (iVar4 != 0) goto LAB_00153e00;
  do {
    FUN_00151570(param_1,"\n\t...");
    iVar4 = iVar3;
    param_4 = iVar5 - 0xc;
    while( true ) {
      param_4 = param_4 + 1;
      iVar3 = FUN_00159110(param_2,param_4,auStack_e0);
      if (iVar3 == 0) goto LAB_00153f70;
      iVar3 = iVar4 + -1;
      if (iVar4 == 0) break;
LAB_00153e00:
      FUN_001594c0(param_2,&DAT_03952dd1,auStack_e0);
      FUN_00151650(param_1,"\n\t%s:",auStack_a8);
      if (0 < local_b8) {
        FUN_00151650(param_1,&DAT_0389ff2e);
      }
      FUN_00151570(param_1,&DAT_039b05fb);
      iVar4 = FUN_00154220(param_1,auStack_e0);
      if (iVar4 == 0) {
        if (*local_d0 == '\0') {
          if (*local_c8 == 'C') {
            FUN_00151570(param_1,&DAT_038f8f88);
          }
          else if (*local_c8 == 'm') {
            FUN_00151570(param_1,"main chunk");
          }
          else {
            FUN_00151650(param_1,"function <%s:%d>",auStack_a8,local_b4);
          }
        }
        else {
          FUN_00151650(param_1,"%s \'%s\'",local_d0,local_d8);
        }
      }
      else {
        uVar6 = FUN_00150da0(param_1,0xffffffff,0);
        FUN_00151650(param_1,"function \'%s\'",uVar6);
        FUN_0014ff70(param_1,0xfffffffe,0xffffffff);
        FUN_0014ff10(param_1,0xfffffffe);
      }
      if (local_a9 != '\0') {
        FUN_00151570(param_1,"\n\t(...tail calls...)");
      }
      iVar4 = FUN_0014fef0(param_1);
      FUN_00153380(param_1,iVar4 - iVar1);
      iVar4 = iVar3;
    }
  } while( true );
}


