/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009feac4; name: FUN_009feac4
 */


void FUN_009feac4(undefined8 *param_1,int *param_2,undefined8 param_3)

{
  uint *puVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined4 local_3c;
  long local_38;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_18;
  
  puVar3 = (ushort *)((long)param_2 - (long)*param_2);
  uVar2 = *puVar3;
  if (uVar2 < 5) {
    local_24 = 0;
LAB_009feba8:
    local_28 = 0;
LAB_009febac:
    local_2c = 0;
  }
  else {
    local_24 = 0;
    if ((ulong)puVar3[2] != 0) {
      local_24 = *(undefined4 *)((long)param_2 + (ulong)puVar3[2]);
    }
    if (uVar2 < 7) goto LAB_009feba8;
    local_28 = 0;
    if ((ulong)puVar3[3] != 0) {
      local_28 = *(undefined4 *)((long)param_2 + (ulong)puVar3[3]);
    }
    if (uVar2 < 9) goto LAB_009febac;
    local_2c = 0;
    if ((ulong)puVar3[4] != 0) {
      local_2c = (uint)*(byte *)((long)param_2 + (ulong)puVar3[4]);
    }
    if (10 < uVar2) {
      local_38 = 0;
      if ((ulong)puVar3[5] != 0) {
        puVar1 = (uint *)((long)param_2 + (ulong)puVar3[5]);
        local_38 = (long)puVar1 + (ulong)*puVar1;
      }
      if (uVar2 < 0xd) {
        local_3c = 0;
      }
      else {
        local_3c = 0;
        if ((ulong)puVar3[6] != 0) {
          local_3c = *(undefined4 *)((long)param_2 + (ulong)puVar3[6]);
        }
      }
      goto LAB_009feb64;
    }
  }
  local_3c = 0;
  local_38 = 0;
LAB_009feb64:
  FUN_009febc4(&local_18,param_3,&local_24,&local_28,&local_2c,&local_38,&local_3c);
  *param_1 = local_18;
  return;
}


