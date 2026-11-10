/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086df78; name: FUN_0086df78
 */


void FUN_0086df78(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 undefined2 *param_5)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined4 local_d8 [4];
  undefined4 local_c8 [8];
  char *local_a8;
  char local_a0 [128];
  
  pcVar3 = (char *)FUN_007ec6e4(param_3);
  lVar6 = 0;
  cVar2 = *pcVar3;
  pcVar1 = pcVar3;
  do {
    if (cVar2 == '\0') {
      pcVar1 = local_a0;
LAB_0086dff0:
      pcVar1[lVar6] = '\0';
      puVar4 = (undefined1 *)FUN_0081f060(local_a0,0x3a);
      if (puVar4 == (undefined1 *)0x0) {
        local_c8[0] = 0x10407;
        local_d8[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_c8 | 4),(Result *)local_d8);
      }
      else {
        *puVar4 = 0;
        uVar5 = strtol(puVar4 + 1,&local_a8,10);
        if ((uVar5 >> 0x10 == 0) && (*local_a8 == '\0')) {
          *param_5 = (short)uVar5;
          FUN_007ec5c4(local_c8,local_a0);
          (**(code **)(*param_4 + 0x10))(local_d8,param_4,local_c8);
          local_c8[0] = 0;
        }
        else {
          local_c8[0] = 0x10407;
        }
        local_d8[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_c8 | 4),(Result *)local_d8);
      }
      FUN_007ee578(param_1,local_c8);
      return;
    }
    local_a0[lVar6] = cVar2;
    if ((lVar6 == 0x7e) || (pcVar1[1] == '\0')) {
      pcVar1 = local_a0 + 1;
      goto LAB_0086dff0;
    }
    local_a0[lVar6 + 1] = pcVar1[1];
    lVar6 = lVar6 + 2;
    pcVar1 = pcVar3 + lVar6;
    cVar2 = *pcVar1;
  } while( true );
}


