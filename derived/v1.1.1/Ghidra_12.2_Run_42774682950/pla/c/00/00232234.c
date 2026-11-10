/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00232234; name: FUN_00232234
 */


void FUN_00232234(long param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_58;
  ulong uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined2 local_28;
  ushort local_26;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((*(code **)(param_2 + 0x178) == (code *)0x0) ||
     (uVar1 = (**(code **)(param_2 + 0x178))
                        (param_3,plVar2 + 8,plVar2 + 1,*(long *)(param_1 + 0x20) + 8,plVar2 + 0x11,
                         *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_2 + 0x180)),
     (uVar1 & 1) == 0)) {
    local_38 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    FUN_00876e3c(&local_58);
    local_58 = 0;
    (**(code **)(*plVar2 + 0x20))(&local_80,plVar2);
    uStack_50 = (ulong)CONCAT24((undefined2)local_80,(undefined4)uStack_50);
    (**(code **)(*plVar2 + 0x20))(&local_80,plVar2);
    local_60 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_48 = CONCAT44(local_48._4_4_,(uint)local_80._2_2_);
    local_80 = 0;
    uStack_78 = 0;
    FUN_00876e3c(&local_80);
    local_80 = 0;
    (**(code **)(**(long **)(param_1 + 0x20) + 0x20))(&local_28);
    uStack_78 = (ulong)CONCAT24(local_28,(undefined4)uStack_78);
    (**(code **)(**(long **)(param_1 + 0x20) + 0x20))(&local_28);
    local_70 = CONCAT44(local_70._4_4_,(uint)local_26);
    FUN_00877bbc(param_3,plVar2[3],&local_58,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),
                 &local_80,0);
  }
  return;
}


