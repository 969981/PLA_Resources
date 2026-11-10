/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00421a90; name: FUN_00421a90
 */


void FUN_00421a90(undefined8 ***param_1,ulong *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 **ppuVar5;
  undefined8 local_40;
  undefined8 ***local_38;
  
  uVar4 = (uint)*param_2;
  uVar1 = uVar4 & 0x1000;
  if ((uVar4 >> 0xc & 1) != 0) {
    local_38 = param_1;
    param_1 = &local_38;
  }
  if ((*param_2 & 6) == 0) {
    FUN_00421830(param_1,param_2[4],uVar1);
  }
  else {
    ppuVar5 = *param_1;
    iVar2 = FUN_00407950(ppuVar5);
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        local_40 = FUN_00407970(ppuVar5,iVar2);
        FUN_00421830(&local_40,param_2[4],uVar1);
        iVar2 = iVar2 + 1;
        iVar3 = FUN_00407950(ppuVar5);
      } while (iVar2 < iVar3);
    }
    FUN_00407010(ppuVar5);
    *param_1 = (undefined8 **)0x0;
  }
  return;
}


