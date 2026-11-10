/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00826284; name: FUN_00826284
 */


/* WARNING: Removing unreachable block (ram,0x00826350) */

void FUN_00826284(undefined8 param_1,uint *param_2,ulong param_3,uint param_4,uint param_5,
                 int param_6,long param_7)

{
  Result *pRVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined4 local_70 [4];
  undefined4 local_60 [4];
  undefined4 local_50 [4];
  
  pRVar1 = (Result *)local_70;
  if ((char)param_2[0x12] == '\0') {
    if ((((param_3 != 0) && ((param_3 & 7) == 0)) && (param_5 != 0)) && (param_6 != 0)) {
      if ((uint)(param_6 * 0x58 + (int)((long)(int)param_5 * 0x18)) <= param_4) {
        *param_2 = param_5;
        if (param_5 == 1) {
          lVar3 = 0;
LAB_00826380:
          puVar2 = (undefined8 *)(param_3 + lVar3 * 0x18);
          puVar2[2] = 0;
          *puVar2 = 0;
          puVar2[1] = 0;
        }
        else {
          lVar3 = 0;
          puVar2 = (undefined8 *)(param_3 + 0x18);
          do {
            lVar3 = lVar3 + 2;
            puVar2[-3] = 0;
            puVar2[-2] = 0;
            puVar2[-1] = 0;
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            puVar2 = puVar2 + 6;
          } while ((ulong)param_5 - ((ulong)param_5 & 1) != lVar3);
          if ((param_5 & 1) != 0) goto LAB_00826380;
        }
        *(ulong *)(param_2 + 2) = param_3;
        FUN_00828400(local_60,param_2 + 4,param_3 + ((long)(int)param_5 * 0x18 & 0xfffffff8U),
                     param_6 * 0x58,param_6);
        if (0 < (int)*param_2) {
          lVar3 = 0;
          lVar4 = 0x10;
          do {
            *(uint **)(*(long *)(param_2 + 2) + lVar4) = param_2 + 4;
            local_50[0] = 0;
            local_70[0] = 0;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_70);
            FUN_007ee578(local_70,local_50);
            lVar3 = lVar3 + 1;
            lVar4 = lVar4 + 0x18;
          } while (lVar3 < (int)*param_2);
        }
        if (param_7 != 0) {
          *(long *)(param_2 + 0x10) = param_7;
        }
        *(undefined1 *)(param_2 + 0x12) = 1;
        local_50[0] = 0;
        local_70[0] = 0;
        goto LAB_008262dc;
      }
    }
    local_50[0] = 0x10407;
  }
  else {
    local_50[0] = 0x10402;
  }
  local_60[0] = 0;
  pRVar1 = (Result *)local_60;
LAB_008262dc:
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),pRVar1);
  FUN_007ee578(param_1,local_50);
  return;
}


