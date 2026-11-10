/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01085850; name: FUN_01085850
 */


void FUN_01085850(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 local_28;
  
  lVar2 = FUN_001511d0(param_1,1);
  local_28 = 0;
  uVar1 = FUN_010858e0(param_1,&local_28,param_2,
                       *(undefined8 *)(lVar2 + ((ulong)(uint)-(int)lVar2 & 7)));
  FUN_0014ff10(param_1,0);
  FUN_001514d0(param_1,uVar1);
  return;
}


