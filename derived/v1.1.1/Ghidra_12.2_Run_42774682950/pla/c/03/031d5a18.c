/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d5a18; name: FUN_031d5a18
 */


void FUN_031d5a18(long param_1,int *param_2,long *param_3)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int local_70 [2];
  int local_68 [2];
  int local_60 [2];
  char local_58;
  char local_57;
  long local_50;
  undefined8 local_48;
  
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x38) +
                   (long)*(int *)(param_1 + 0x20) * 0xf0);
  if (*(char *)(lVar5 + 0x30) == '\x01') {
    lVar4 = *(long *)(lVar5 + 0x20);
  }
  else {
    lVar4 = FUN_02898b44();
  }
  local_50 = 0;
  local_48 = -0x8000000000000000;
  local_60[0] = *param_2;
  FUN_031dac94(param_1 + 0x28,local_60,*param_3,*param_3 + (long)(int)param_3[1] * 2,&local_58);
  if (local_57 == '\0') {
    local_70[0] = *param_2;
    FUN_031d5bb4(lVar5,local_70,param_3);
  }
  else {
    local_68[0] = *param_2;
    FUN_031d0c10(param_1,lVar5,local_68);
    if ((int)local_48 != 0) {
      lVar8 = (long)(int)local_48 << 4;
      cVar2 = *(char *)(local_50 + 0xc);
      lVar6 = local_50;
      if (cVar2 != '\0') goto LAB_031d5af0;
      do {
        FUN_031d213c(lVar5,lVar6);
        lVar7 = lVar6;
        while( true ) {
          lVar6 = lVar7 + 0x10;
          lVar8 = lVar8 + -0x10;
          if (lVar8 == 0) goto LAB_031d5b24;
          cVar2 = *(char *)(lVar7 + 0x1c);
          if (cVar2 == '\0') break;
LAB_031d5af0:
          if (cVar2 != '\x01') {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          FUN_031d22e8(param_1,lVar5,lVar6);
          lVar7 = lVar6;
        }
      } while( true );
    }
  }
LAB_031d5b24:
  if (local_58 != '\0') {
    if (*(int *)(*(long *)(lVar5 + 0x20) + 0x108) == 0) {
      bVar3 = 0;
    }
    else {
      bVar3 = *(byte *)(*(long *)(*(long *)(lVar5 + 0x20) + 0x100) + (long)*param_2) & 0xf7;
    }
    *(byte *)(*(long *)(lVar4 + 0x100) + (long)*param_2) = bVar3;
  }
  FUN_031cdd40(param_1 + 0xb8,param_2);
  lVar5 = local_48;
  uVar1 = local_48._4_4_;
  local_48 = (ulong)local_48._4_4_ << 0x20;
  if ((-1 < lVar5) && (local_50 != 0)) {
    FUN_032cf244(PTR_PTR_0434a080,local_50,0x10,uVar1 & 0x3fffffff);
  }
  return;
}


