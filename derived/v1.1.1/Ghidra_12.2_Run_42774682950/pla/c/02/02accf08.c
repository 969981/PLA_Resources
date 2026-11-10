/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02accf08; name: FUN_02accf08
 */


void FUN_02accf08(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long *local_48;
  
  *param_1 = &PTR_LAB_04281ed8;
  puVar9 = param_1 + 1;
  *puVar9 = 0;
  param_1[4] = 0x666666666666666;
  param_1[5] = 0;
  param_1[9] = 0x666666666666666;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[7] = 0;
  param_1[8] = param_2;
  if (PTR_s_BaseColorMap_04281f78 != (undefined *)0x0) {
    FUN_00947cf8(&local_48);
    FUN_02acd930(puVar9,&local_48,&DAT_04281f80);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (PTR_s_MetallicMap_04281f88 != (undefined *)0x0) {
    FUN_00947cf8(&local_48);
    FUN_02acd930(puVar9,&local_48,&DAT_04281f90);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (PTR_s_NormalMap_04281f98 != (undefined *)0x0) {
    FUN_00947cf8(&local_48);
    FUN_02acd930(puVar9,&local_48,&DAT_04281fa0);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (PTR_s_ParallaxMap_04281fa8 != (undefined *)0x0) {
    FUN_00947cf8(&local_48);
    FUN_02acd930(puVar9,&local_48,&DAT_04281fb0);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (PTR_s_RoughnessMap_04281fb8 != (undefined *)0x0) {
    FUN_00947cf8(&local_48);
    FUN_02acd930(puVar9,&local_48,&DAT_04281fc0);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (PTR_s_EmissionColorMap_04281fc8 != (undefined *)0x0) {
    FUN_00947cf8(&local_48);
    FUN_02acd930(puVar9,&local_48,&DAT_04281fd0);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (PTR_s_AOMap_04281fd8 != (undefined *)0x0) {
    FUN_00947cf8(&local_48);
    FUN_02acd930(puVar9,&local_48,&DAT_04281fe0);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (PTR_s_LayerMaskMap_04281fe8 != (undefined *)0x0) {
    FUN_00947cf8(&local_48);
    FUN_02acd930(puVar9,&local_48,&DAT_04281ff0);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (PTR_s_WindMaskMap_04281ff8 != (undefined *)0x0) {
    FUN_00947cf8(&local_48);
    FUN_02acd930(puVar9,&local_48,&DAT_04282000);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (DAT_04282008 != 0) {
    FUN_00947cf8(&local_48);
    FUN_02acd930(puVar9,&local_48,&DAT_04282010);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (PTR_s_BaseColorMap1_04282018 != (undefined *)0x0) {
    FUN_00947cf8(&local_48);
    FUN_02acd930(puVar9,&local_48,&DAT_04282020);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (PTR_s_BaseColorMap2_04282028 != (undefined *)0x0) {
    FUN_00947cf8(&local_48);
    FUN_02acd930(puVar9,&local_48,&DAT_04282030);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (PTR_s_NormalMap1_04282038 != (undefined *)0x0) {
    FUN_00947cf8(&local_48);
    FUN_02acd930(puVar9,&local_48,&DAT_04282040);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (PTR_s_NormalMap2_04282048 != (undefined *)0x0) {
    FUN_00947cf8(&local_48);
    FUN_02acd930(puVar9,&local_48,&DAT_04282050);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (DAT_04282058 != 0) {
    FUN_00947cf8(&local_48);
    FUN_02acd930(puVar9,&local_48,&DAT_04282060);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (PTR_s_DiffuseProbe_04282068 != (undefined *)0x0) {
    FUN_00947cf8(&local_48);
    FUN_02acd930(puVar9,&local_48,&DAT_04282070);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (PTR_s_SpecularProbe_04282078 != (undefined *)0x0) {
    FUN_00947cf8(&local_48);
    FUN_02acd930(puVar9,&local_48,&DAT_04282080);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (DAT_04282088 != 0) {
    FUN_00947cf8(&local_48);
    FUN_02acd930(puVar9,&local_48,&DAT_04282090);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  lVar6 = 0;
  puVar8 = PTR_s_HeightMap_04282098;
  while( true ) {
    if (puVar8 != (undefined *)0x0) {
      FUN_00947cf8(&local_48);
      FUN_02acd930(puVar9,&local_48,&DAT_042820a0 + lVar6);
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
    }
    if (lVar6 + 0x10 == 0x160) break;
    puVar8 = *(undefined **)((long)&PTR_s_HeightNormalMap_042820a8 + lVar6);
    lVar6 = lVar6 + 0x10;
  }
  if (PTR_s_BlendMap0_042821f8 != (undefined *)0x0) {
    FUN_00947cf8(&local_48);
    FUN_02acd930(puVar9,&local_48,&DAT_04282200);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (PTR_s_BlendMap1_04282208 != (undefined *)0x0) {
    FUN_00947cf8(&local_48);
    FUN_02acd930(puVar9,&local_48,&DAT_04282210);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (PTR_s_LerpMap_04282218 != (undefined *)0x0) {
    FUN_00947cf8(&local_48);
    FUN_02acd930(puVar9,&local_48,&DAT_04282220);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (PTR_s_MaskMap0_04282228 != (undefined *)0x0) {
    FUN_00947cf8(&local_48);
    FUN_02acd930(puVar9,&local_48,&DAT_04282230);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (PTR_s_MaskMap1_04282238 != (undefined *)0x0) {
    FUN_00947cf8(&local_48);
    FUN_02acd930(puVar9,&local_48,&DAT_04282240);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (DAT_04282248 != 0) {
    FUN_00947cf8(&local_48);
    FUN_02acd930(puVar9,&local_48,&DAT_04282250);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (PTR_s_HighlightMaskMap_04282258 != (undefined *)0x0) {
    FUN_00947cf8(&local_48);
    FUN_02acd930(puVar9,&local_48,&DAT_04282260);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (PTR_s_EyelidShadowMaskMap_04282268 != (undefined *)0x0) {
    FUN_00947cf8(&local_48);
    FUN_02acd930(puVar9,&local_48,&DAT_04282270);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (PTR_s_UpperEyelidColorMap_04282278 != (undefined *)0x0) {
    FUN_00947cf8(&local_48);
    FUN_02acd930(puVar9,&local_48,&DAT_04282280);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (PTR_s_LowerEyelidColorMap_04282288 != (undefined *)0x0) {
    FUN_00947cf8(&local_48);
    FUN_02acd930(puVar9,&local_48,&DAT_04282290);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (DAT_04282298 != 0) {
    FUN_00947cf8(&local_48);
    FUN_02acd930(puVar9,&local_48,&DAT_042822a0);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (PTR_s_FlowMap_042822a8 != (undefined *)0x0) {
    FUN_00947cf8(&local_48);
    FUN_02acd930(puVar9,&local_48,&DAT_042822b0);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (PTR_s_FoamMaskMap_042822b8 != (undefined *)0x0) {
    FUN_00947cf8(&local_48);
    FUN_02acd930(puVar9,&local_48,&DAT_042822c0);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (DAT_042822c8 != 0) {
    FUN_00947cf8(&local_48);
    FUN_02acd930(puVar9,&local_48,&DAT_042822d0);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (PTR_s_WeatherLayerMaskMap_042822d8 != (undefined *)0x0) {
    FUN_00947cf8(&local_48);
    FUN_02acd930(puVar9,&local_48,&DAT_042822e0);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (DAT_042822e8 != 0) {
    FUN_00947cf8(&local_48);
    FUN_02acd930(puVar9,&local_48,&DAT_042822f0);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (PTR_s_PackedMap_042822f8 != (undefined *)0x0) {
    FUN_00947cf8(&local_48);
    FUN_02acd930(puVar9,&local_48,&DAT_04282300);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (DAT_04282308 != 0) {
    FUN_00947cf8(&local_48);
    FUN_02acd930(puVar9,&local_48,&DAT_04282310);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (PTR_s_DisplacementMap_04282318 != (undefined *)0x0) {
    FUN_00947cf8(&local_48);
    FUN_02acd930(puVar9,&local_48,&DAT_04282320);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (DAT_04282328 != 0) {
    FUN_00947cf8(&local_48);
    FUN_02acd930(puVar9,&local_48,&DAT_04282330);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  lVar6 = FUN_02ad232c(&local_48,param_2,param_3);
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = (long *)param_1[0xe];
  param_1[0xe] = 0;
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  param_1[0xe] = lVar6;
  return;
}


