/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed8854; name: FUN_02ed8854
 */


void FUN_02ed8854(long *param_1,int param_2)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined4 local_24;
  
  FUN_02ee94c4(param_1 + 6);
  (**(code **)(*param_1 + 0x188))(param_1,1,1);
  (**(code **)(*param_1 + 0xe8))(0,param_1,param_2,0);
  if (param_2 - 0x14U < 3) {
    lVar1 = *param_1;
    uVar5 = 0;
  }
  else {
    if (param_2 == 0x12) {
      lVar1 = 0xc;
    }
    else {
      if (param_2 != 0x13) {
        return;
      }
      lVar1 = 0xd;
    }
    local_24 = *(undefined4 *)((long)&DAT_0440a800 + lVar1 * 4);
    pbVar2 = (byte *)param_1[0x13];
    pbVar3 = pbVar2;
    if (pbVar2 != (byte *)0x0) {
      uVar4 = 0;
      pbVar3 = pbVar2 + ((ulong)(*pbVar2 + 4) & 0x1fc);
      do {
        if ((uint)pbVar2[uVar4 + 1] == (uint)lVar1) goto LAB_02ed894c;
        uVar4 = uVar4 + 1;
        pbVar3 = pbVar3 + 4;
      } while (uVar4 < *pbVar2);
      pbVar3 = (byte *)0x0;
    }
LAB_02ed894c:
    pbVar2 = (byte *)&local_24;
    if (pbVar3 != (byte *)0x0) {
      pbVar2 = pbVar3;
    }
    uVar5 = *(undefined4 *)pbVar2;
    lVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x02ed88dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x200))(uVar5,param_1,param_2,0,0);
  return;
}


