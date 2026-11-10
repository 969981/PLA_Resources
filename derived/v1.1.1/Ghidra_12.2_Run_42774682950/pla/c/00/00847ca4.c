/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00847ca4; name: FUN_00847ca4
 */


void FUN_00847ca4(int *param_1,long param_2,undefined1 param_3,undefined8 param_4,undefined2 param_5
                 ,undefined8 param_6)

{
  long lVar1;
  int iVar2;
  char cVar3;
  undefined1 *puVar4;
  long lVar5;
  long *plVar6;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined2 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined2 local_88;
  undefined8 local_80;
  undefined4 local_78 [4];
  undefined4 local_68 [2];
  
  if (*(char *)(param_2 + 0x28) == '\0') {
    local_78[0] = 0x10408;
  }
  else {
    lVar1 = param_2 + 0x10;
    if (*(long *)(param_2 + 0x18) != lVar1) {
      iVar2 = *(int *)(param_2 + 0x24);
      plVar6 = (long *)(*(long *)(param_2 + 0x18) - (long)iVar2);
      do {
        *param_1 = 0;
        local_78[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)(param_1 + 1),(Result *)local_78);
        cVar3 = (**(code **)(*plVar6 + 0x20))(plVar6);
        if (cVar3 == ',') {
          puVar4 = local_b8;
          local_b0 = 0;
          local_a8 = 0;
          local_a0 = 0;
          local_b8[0] = param_3;
        }
        else {
          puVar4 = local_98;
          local_98[0] = param_3;
          local_90 = param_4;
          local_88 = param_5;
          local_80 = param_6;
        }
        (**(code **)(*plVar6 + 0x40))(local_78,plVar6,puVar4);
        FUN_007ee660(param_1,local_78);
        lVar5 = (long)*(int *)(param_2 + 0x24);
        if (*param_1 != 0) {
          if (*(long *)(param_2 + 0x18) == lVar1) {
            return;
          }
          plVar6 = (long *)(*(long *)(param_2 + 0x18) - lVar5);
          do {
            cVar3 = (**(code **)(*plVar6 + 0x20))(plVar6);
            if (cVar3 == ',') {
              FUN_008473d8(plVar6,0xfd);
            }
            else {
              (**(code **)(*plVar6 + 0x48))(plVar6);
            }
            plVar6 = (long *)(*(long *)((long)plVar6 + (long)*(int *)(param_2 + 0x24) + 8) -
                             (long)*(int *)(param_2 + 0x24));
          } while (plVar6 != (long *)(lVar1 - lVar5));
          return;
        }
        plVar6 = (long *)(*(long *)((long)plVar6 + lVar5 + 8) + (long)-*(int *)(param_2 + 0x24));
      } while (plVar6 != (long *)(lVar1 - iVar2));
    }
    local_78[0] = 0;
  }
  local_68[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_68);
  FUN_007ee578(param_1,local_78);
  return;
}


