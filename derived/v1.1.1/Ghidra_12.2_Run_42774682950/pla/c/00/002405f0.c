/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002405f0; name: FUN_002405f0
 */


void FUN_002405f0(long param_1,long param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  undefined4 *__s;
  ulong uVar6;
  ushort local_48;
  ushort local_46;
  
  lVar5 = *(long *)(*(long *)(param_2 + 200) + 0x38);
  if (lVar5 == 0) {
    __s = (undefined4 *)0x0;
  }
  else {
    __s = (undefined4 *)(lVar5 + (ulong)*(uint *)(param_1 + 0x34));
  }
  memset(__s,0,0x220);
  *__s = 0;
  __s[1] = *param_5;
  __s[2] = param_5[1];
  uVar2 = FUN_00240718(param_1,__s);
  uVar2 = FUN_002408cc(uVar2,__s,param_2);
  FUN_00240a7c(uVar2,__s,param_3,param_4);
  uVar4 = *(uint *)(param_1 + 0x14);
  if ((uVar4 & 3) != 0) {
    lVar5 = 0;
    uVar6 = 0;
    plVar3 = *(long **)(*(long *)(param_1 + 0x18) + 8);
    while( true ) {
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x20))(&local_48);
        uVar1 = NEON_ucvtf((uint)local_48);
        *(undefined4 *)((long)__s + lVar5 + 0x1f0) = uVar1;
        uVar1 = NEON_ucvtf((uint)local_46);
        *(undefined4 *)((long)__s + lVar5 + 500) = uVar1;
        uVar4 = *(uint *)(param_1 + 0x14);
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x10;
      if ((uVar4 & 3) <= uVar6) break;
      plVar3 = *(long **)(*(long *)(param_1 + 0x18) + lVar5 + 8);
    }
  }
  return;
}


