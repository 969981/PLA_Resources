/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f73f0; name: FUN_004f73f0
 */


bool FUN_004f73f0(long param_1,long *param_2,char *param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_60;
  undefined8 local_58;
  ulong local_50;
  undefined8 local_48;
  char *local_38;
  
  local_38 = param_3;
  if ((param_1 == 0) && (param_2 == (long *)0x0)) {
    FUN_004014b0(0x14,0x187,0x43,"external/openssl/ssl/ssl_mcnf.c",0x21);
    lVar5 = 0;
    iVar1 = 0;
  }
  else {
    if ((param_3 == (char *)0x0) && (param_4 != 0)) {
      local_38 = "system_default";
    }
    iVar1 = FUN_004bc430(local_38,&local_48);
    if (iVar1 == 0) {
      if (param_4 == 0) {
        FUN_004014b0(0x14,0x187,0x71,"external/openssl/ssl/ssl_mcnf.c",0x29);
        FUN_00402170(2,"name=",local_38);
      }
      lVar5 = 0;
    }
    else {
      uVar2 = FUN_004bc400(local_48,&local_38,&local_50);
      lVar5 = FUN_004f7a00();
      if (lVar5 != 0) {
        uVar4 = 2;
        if (param_4 == 0) {
          uVar4 = 0x62;
        }
        if (param_1 == 0) {
          lVar7 = *param_2;
          FUN_004f7ff0(lVar5,param_2);
        }
        else {
          lVar7 = *(long *)(param_1 + 8);
          FUN_004f7f90(lVar5,param_1);
        }
        if (*(undefined **)(lVar7 + 0x28) != PTR_LAB_04374638) {
          uVar4 = uVar4 | 8;
        }
        if (*(undefined **)(lVar7 + 0x30) != PTR_LAB_04374638) {
          uVar4 = uVar4 | 4;
        }
        FUN_004f7f70(lVar5,uVar4);
        if (local_50 != 0) {
          uVar6 = 0;
          do {
            FUN_004bc4b0(uVar2,uVar6,&local_58,&local_60);
            iVar1 = FUN_004f7620(lVar5,local_58,local_60);
            if (iVar1 < 1) {
              if (iVar1 == -2) {
                uVar2 = 0x8b;
                uVar3 = 0x48;
              }
              else {
                uVar3 = 0x4a;
                uVar2 = 0x180;
              }
              FUN_004014b0(0x14,0x187,uVar2,"external/openssl/ssl/ssl_mcnf.c",uVar3);
              FUN_00402170(6,"section=",local_38,", cmd=",local_58,", arg=",local_60);
              goto LAB_004f75d4;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < local_50);
        }
        iVar1 = FUN_004f7a20(lVar5);
        goto LAB_004f75d4;
      }
    }
    iVar1 = 0;
  }
LAB_004f75d4:
  FUN_004f7e80(lVar5);
  return 0 < iVar1;
}


