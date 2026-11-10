/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00447cb0; name: FUN_00447cb0
 */


undefined4 * FUN_00447cb0(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  
  if (param_3 == 0x18) {
joined_r0x00447d30:
    puVar7 = param_1;
    if ((param_1 == (undefined4 *)0x0) &&
       (puVar7 = (undefined4 *)FUN_0040a450(), puVar7 == (undefined4 *)0x0)) {
      return (undefined4 *)0x0;
    }
    iVar5 = FUN_0040a280(puVar7,0,0x14);
    if (iVar5 != 0) {
      puVar7[1] = param_3;
      if (param_3 == 0x18) {
        iVar5 = param_2[5] + 0x76c;
        uVar6 = param_2[3];
        iVar2 = param_2[4];
        uVar1 = param_2[1];
        uVar3 = param_2[2];
        uVar4 = *param_2;
        pcVar8 = "%04d%02d%02d%02d%02d%02dZ";
      }
      else {
        uVar6 = param_2[3];
        iVar2 = param_2[4];
        uVar1 = param_2[1];
        uVar3 = param_2[2];
        iVar5 = (int)param_2[5] % 100;
        uVar4 = *param_2;
        pcVar8 = "%02d%02d%02d%02d%02d%02dZ";
      }
      uVar6 = FUN_00403120(*(undefined8 *)(puVar7 + 2),0x14,pcVar8,iVar5,iVar2 + 1,uVar6,uVar3,uVar1
                           ,uVar4);
      *puVar7 = uVar6;
      return puVar7;
    }
  }
  else {
    if (param_3 == 0x17) {
      if (param_2[5] - 0x32 < 100) {
        param_3 = 0x17;
        goto joined_r0x00447d30;
      }
    }
    else if (param_3 == -1) {
      param_3 = 0x17;
      if (99 < param_2[5] - 0x32) {
        param_3 = 0x18;
      }
      goto joined_r0x00447d30;
    }
    puVar7 = (undefined4 *)0x0;
  }
  if (puVar7 != param_1) {
    FUN_0040a4b0(puVar7);
  }
  return (undefined4 *)0x0;
}


