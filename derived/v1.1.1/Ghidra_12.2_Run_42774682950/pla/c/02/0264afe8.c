/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0264afe8; name: FUN_0264afe8
 */


void FUN_0264afe8(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 1;
  }
  else if (param_2 == 1) {
    uVar1 = 2;
  }
  else {
    if (param_2 != 3) goto LAB_0264b014;
    uVar1 = 3;
  }
  FUN_01a51334(param_1,&DAT_03a7db90,uVar1);
LAB_0264b014:
  FUN_01a50188(0,param_1,&DAT_03a7dba8);
  FUN_01a50188(0,param_1,&DAT_03a7dbb0);
  FUN_01a50188(0x3f800000,param_1,&DAT_03a7dbb8);
  FUN_01a5bd74(param_1,&DAT_03a7db88,0);
  FUN_01a5bd74(param_1,&DAT_03a7db98,1);
  FUN_01a51334(param_1,&DAT_03a7dba0,0);
  *(undefined1 *)(param_1 + 0xce8) = 1;
  *(undefined2 *)(param_1 + 0xcea) = 1;
  FUN_0264af94(param_1);
  *(undefined4 *)(param_1 + 0xd00) = 0;
  *(undefined8 *)(param_1 + 0xd10) = 0;
  *(undefined8 *)(param_1 + 0xd18) = 0;
  *(undefined8 *)(param_1 + 0xd20) = 0;
  *(undefined8 *)(param_1 + 0xd28) = 0;
  *(undefined8 *)(param_1 + 0xd30) = 0;
  *(undefined8 *)(param_1 + 0xd38) = 0;
  *(undefined8 *)(param_1 + 0xd40) = 0;
  *(undefined8 *)(param_1 + 0xd48) = 0;
  *(undefined8 *)(param_1 + 0xd50) = 0;
  *(undefined8 *)(param_1 + 0xd58) = 0;
  *(undefined8 *)(param_1 + 0xd60) = 0;
  *(undefined8 *)(param_1 + 0xd68) = 0;
  return;
}


