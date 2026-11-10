/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00847298; name: FUN_00847298
 */


void FUN_00847298(undefined8 param_1,long param_2,char *param_3)

{
  char cVar1;
  short sVar2;
  long lVar3;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  cVar1 = *param_3;
  if (cVar1 == -3) {
    local_30[0] = 0x10407;
  }
  else {
    if (*(char *)(param_2 + 0x4a) != cVar1) {
      *(char *)(param_2 + 0x4a) = cVar1;
    }
    lVar3 = *(long *)(param_3 + 8);
    if ((lVar3 != 0) && (*(long *)(param_2 + 0x40) != lVar3)) {
      *(long *)(param_2 + 0x40) = lVar3;
    }
    sVar2 = *(short *)(param_3 + 0x10);
    if ((sVar2 != 0) && (*(short *)(param_2 + 0x48) != sVar2)) {
      *(short *)(param_2 + 0x48) = sVar2;
    }
    lVar3 = *(long *)(param_3 + 0x18);
    if ((lVar3 != 0) && (*(long *)(param_2 + 0x50) != lVar3)) {
      *(long *)(param_2 + 0x50) = lVar3;
    }
    local_30[0] = 0;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_007ee578(param_1,local_30);
  return;
}


