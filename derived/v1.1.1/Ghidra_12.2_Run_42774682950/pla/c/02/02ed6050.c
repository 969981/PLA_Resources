/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed6050; name: FUN_02ed6050
 */


void FUN_02ed6050(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 int param_5)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  
  puVar1 = (undefined4 *)FUN_02ef4254(0x3f800000,param_3,0xb);
  if (puVar1 != (undefined4 *)0x0) {
    if (*(long *)(puVar1 + 2) != 0) {
      FUN_02f0f0a8(param_1,DAT_0440a150,*(long *)(puVar1 + 2),0xb,param_5,param_4,0);
      return;
    }
    if (param_5 == 0) {
      FUN_02ef43c4(param_1,param_3,0xb,1);
      return;
    }
    local_58 = *puVar1;
    uStack_60 = 0xb;
    local_54 = (undefined4)param_1;
    local_48 = 0xb;
    local_42 = 0;
    local_44 = 0x100;
    local_68 = param_3;
    local_50 = param_5;
    uStack_4c = param_4;
    uVar2 = FUN_02f0ed58(DAT_0440a150,&local_68,1,0);
    *(undefined8 *)(puVar1 + 2) = uVar2;
  }
  return;
}


