/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eba0a8; name: FUN_02eba0a8
 */


undefined8 *
FUN_02eba0a8(long *param_1,undefined8 *param_2,long param_3,undefined8 param_4,int param_5,
            undefined1 *param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  *param_6 = 0;
  uVar2 = (**(code **)(*param_1 + 0x50))(param_1,param_3);
  if ((uVar2 & 1) != 0) {
    if (param_2 != (undefined8 *)0x0) {
      uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
      if (((uVar2 & 1) != 0) && ((*(uint *)(param_3 + 0x24) | 2) == 3)) {
        FUN_02ec1318(param_2,param_1,param_3,param_4,param_5);
      }
      if (param_2[2] != 0) {
        return param_2;
      }
    }
    if ((param_5 == 0) || (*(int *)(param_3 + 0x24) != 0)) {
      iVar1 = (int)param_1[3];
      if (iVar1 == 2) {
        puVar3 = (undefined8 *)FUN_02f59e30(0,0xc0);
        if (puVar3 != (undefined8 *)0x0) {
          FUN_02ec1064(puVar3);
          *puVar3 = &PTR_LAB_042aa0b0;
          *(undefined1 *)(puVar3 + 0x17) = 0;
        }
      }
      else if (iVar1 == 1) {
        puVar3 = (undefined8 *)FUN_02f59e30(0,0xc0);
        if (puVar3 != (undefined8 *)0x0) {
          FUN_02ec1064(puVar3);
          *puVar3 = &PTR_LAB_042aa068;
        }
      }
      else {
        if (iVar1 != 0) {
          return (undefined8 *)0x0;
        }
        puVar3 = (undefined8 *)FUN_02f59e30(0,0xf0);
        if (puVar3 != (undefined8 *)0x0) {
          FUN_02ec1064(puVar3);
          *puVar3 = &PTR_LAB_042aa020;
          puVar3[0x19] = 0;
          puVar3[0x1a] = 0;
          *(undefined1 *)(puVar3 + 0x1d) = 0;
          puVar3[0x1b] = 0;
          puVar3[0x1c] = 0;
        }
      }
      if (puVar3 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      FUN_02ec1318(puVar3,param_1,param_3,param_4,param_5);
      *param_6 = 1;
      return puVar3;
    }
  }
  return (undefined8 *)0x0;
}


