/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0021d2f8; name: FUN_0021d2f8
 */


ulong FUN_0021d2f8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_50 = 0;
  uStack_48 = 0;
  FUN_00876ba8(&local_50);
  local_50 = CONCAT44(8,(undefined4)local_50);
  lVar1 = FUN_00877190(param_1,&local_50);
  local_50 = 0;
  uStack_48 = 0;
  FUN_00876ba8(&local_50);
  local_50 = CONCAT44(0x10,(undefined4)local_50);
  lVar2 = FUN_00877190(param_1,&local_50);
  local_50 = 0;
  uStack_48 = 0;
  FUN_00876ba8(&local_50);
  local_50 = CONCAT44(0x10,(undefined4)local_50);
  lVar3 = FUN_00877190(param_1,&local_50);
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_00876bb0(&local_50);
  lVar4 = FUN_00878470(param_1,&local_50);
  return (((lVar1 + 0x6fU & -lVar1) + lVar2 + 0xb & -lVar2) + lVar3 + 3 & -lVar3) + lVar4 + 3 &
         -lVar4;
}


