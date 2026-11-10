/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0264b108; name: FUN_0264b108
 */


void FUN_0264b108(long param_1,int param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    uVar2 = 1;
    goto LAB_0264b12c;
  }
  switch(param_2) {
  case 1:
    uVar2 = 2;
    break;
  case 2:
    FUN_01a51334(param_1,&DAT_03a7dba0,0xffffffff);
    goto switchD_0264b1cc_default;
  case 3:
    FUN_01a51334(param_1,&DAT_03a7dba0,1);
    puVar1 = &DAT_03a7db88;
    uVar2 = 1;
    goto LAB_0264b140;
  case 4:
    uVar2 = 3;
    break;
  default:
    goto switchD_0264b1cc_default;
  }
LAB_0264b12c:
  FUN_01a51334(param_1,&DAT_03a7db90,uVar2);
  puVar1 = &DAT_03a7db98;
  uVar2 = 0;
LAB_0264b140:
  FUN_01a5bd74(param_1,puVar1,uVar2);
switchD_0264b1cc_default:
  *(undefined1 *)(param_1 + 0xce8) = 0;
  *(undefined2 *)(param_1 + 0xcec) = 0x100;
  FUN_01a5bd74(param_1,&DAT_03a7db78,0);
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


