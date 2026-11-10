/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00783ae0; name: thunk_FUN_00783af0
 */


undefined4 thunk_FUN_00783af0(long *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_70 [64];
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  
  while( true ) {
    FUN_00783168(auStack_70);
    uVar1 = (**(code **)(*param_1 + 0x10))(param_1);
    FUN_00783298(auStack_70,uVar1);
    uVar2 = FUN_007834d0(auStack_70,auStack_30);
    FUN_00783174(auStack_70);
    if ((uVar2 & 1) != 0) break;
    lVar3 = FUN_00783790();
    FUN_00782ee4(*(undefined8 *)(lVar3 + 0x18),param_1);
  }
  return uStack_28;
}


