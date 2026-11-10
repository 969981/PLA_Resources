/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0283d4d8; name: FUN_0283d4d8
 */


void FUN_0283d4d8(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  byte *pbVar8;
  int param3;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined1 *local_d0;
  byte *pbStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  byte local_b0 [64];
  
  lVar4 = FUN_0283d384();
  if (lVar4 != 0) {
    param3 = 0;
    iVar9 = 0;
    while( true ) {
      snprintf((char *)local_b0,0x40,"list_text_pane_name_%02d",param3);
      lVar5 = FUN_002443dc(lVar4,local_b0);
      if ((lVar5 == 0) || (*(char *)(lVar5 + 10) != '\0')) break;
      snprintf((char *)local_b0,0x40,"pane_%s",(char *)(lVar5 + (ulong)*(uint *)(lVar5 + 4)));
      local_d0 = &DAT_cbf29ce484222645;
      if (local_b0[0] != 0) {
        local_d0 = &DAT_cbf29ce484222645;
        pbVar8 = (byte *)((ulong)local_b0 | 1);
        bVar3 = local_b0[0];
        do {
          local_d0 = (undefined1 *)(((ulong)local_d0 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (bVar3 != 0);
      }
      pbStack_c8 = local_b0;
      local_c0 = 0x3f;
      uStack_b8 = 0;
      lVar6 = FUN_0283d384(param_1,&local_d0);
      if (lVar6 == 0) {
        uVar1 = *(uint *)(lVar5 + 4);
        pcVar7 = strstr((char *)(lVar4 + 0xb0),"all");
        lVar6 = lVar4;
        if (pcVar7 == (char *)0x0) {
          lVar6 = *(long *)(lVar4 + 0x18);
          while (pcVar7 = strstr((char *)(lVar6 + 0xb0),"all"), pcVar7 == (char *)0x0) {
            lVar6 = *(long *)(lVar6 + 0x18);
          }
        }
        while( true ) {
          if (lVar6 == 0) goto LAB_0283d660;
          pcVar7 = strstr((char *)(lVar6 + 0xb0),(char *)(lVar5 + (ulong)uVar1));
          if (pcVar7 != (char *)0x0) break;
          lVar6 = FUN_00250790(lVar6);
        }
      }
      param3 = param3 + 1;
      if (iVar9 <= (int)*(float *)(lVar6 + 0x50)) {
        iVar9 = (int)*(float *)(lVar6 + 0x50);
      }
      if (param3 == 100) break;
    }
LAB_0283d660:
    if (iVar9 != 0) {
      uVar2 = *(undefined4 *)(lVar4 + 0x54);
      fVar11 = (float)iVar9;
      lVar5 = FUN_002443dc(lVar4,"text_width_offset_x");
      if ((lVar5 != 0) && (*(char *)(lVar5 + 10) == '\x02')) {
        fVar10 = *(float *)(lVar5 + (ulong)*(uint *)(lVar5 + 4));
        fVar11 = fVar10 + fVar10 + fVar11;
      }
      *(float *)(lVar4 + 0x50) = fVar11;
      *(undefined4 *)(lVar4 + 0x54) = uVar2;
      *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 0x10;
    }
  }
  return;
}


